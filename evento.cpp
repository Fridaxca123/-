#include "evento.h"
#include <fstream>
#include <iostream>

Evento::Evento() {
}

Evento::Evento(int _numEvento, const std::string& _estilo, int _distancia)
    : numEvento(_numEvento), estilo(_estilo), distancia(_distancia) {
}

int Evento::getNumEvento() const {
    return numEvento;
}

std::string Evento::getEstilo() const {
    return estilo;
}

int Evento::getDistancia() const {
    return distancia;
}

void Evento::guardarEvento() const {
    std::ofstream archivo("eventos.txt", std::ios::app);
    if (archivo.is_open()) {
        archivo << "NumEvento: " << numEvento << ", Estilo: " << estilo<< ", Distancia: " << distancia << std::endl;
        std::cout << "Evento registrado correctamente." << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
    }
}

std::string Evento::ClasificarEvento() const {
    if (distancia > 200) {
        return "Fondo";
    } else {
        return "Velocidad";
    }
}




