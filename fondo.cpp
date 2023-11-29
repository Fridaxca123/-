#include "fondo.h"
#include <iostream>

Fondo::Fondo() : record(0.0), tiempo(0.0) {}

Fondo::Fondo(float _record, float _tiempo) : record(_record), tiempo(_tiempo) {}

float Fondo::getRecord() const {
    return record;
}

void Fondo::setRecord(float _record) {
    if (_record < record) {
        std::cout << "No cambio el record\n";
        record = _record;
    } else {
        record = _record;
    }
}

float Fondo::getTiempo() const {
    return tiempo;
}

void Fondo::setTiempo(float _tiempo) {
    tiempo = _tiempo;

    if (_tiempo < record) {
        std::cout << "¡Nuevo récord roto!\n";
        record = _tiempo;
    }
}









