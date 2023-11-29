#include "velocidad.h"
#include <iostream>

Velocidad::Velocidad() : record(0.0), tiempo(0.0) {}

Velocidad::Velocidad(float _record, float _tiempo) : record(_record), tiempo(_tiempo) {}

float Velocidad::getRecord() const {
    return record;
}

void Velocidad::setRecord(float _record) {
    if (_record < record) {
        std::cout << "No cambio el record\n";
        record = _record;
    } else {
        record = _record;
    }
}

float Velocidad::getTiempo() const {
    return tiempo;
}

void Velocidad::setTiempo(float _tiempo) {
    tiempo = _tiempo;

    if (_tiempo < record) {
        std::cout << "¡Nuevo récord roto!\n";
        record = _tiempo;
    }
}






