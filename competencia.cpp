#include "competencia.h"
#include <fstream>
#include <iostream>

Competencia::Competencia() {
}

Competencia::Competencia(const std::string& _nombre, const std::string& _fecha, const std::string& _lugar, int _numNadadores, int _numEventos)  // Actualizado
    : nombre(_nombre), fecha(_fecha), lugar(_lugar), numNadadores(_numNadadores), numEventos(_numEventos) {
}

std::string Competencia::getNombre() const {
    return nombre;
}

std::string Competencia::getFecha() const {
    return fecha;
}

std::string Competencia::getLugar() const {
    return lugar;
}

int Competencia::getNumNadadores() const {
    return numNadadores;
}

int Competencia::getNumEventos() const {  // Nuevo método
    return numEventos;
}

void Competencia::guardarCompetencia() const {
    std::ofstream archivo("competencias.txt", std::ios::app);
    if (archivo.is_open()) {
        archivo << "Nombre: " << nombre << ", Fecha: " << fecha << ", Lugar: " << lugar << ", NumNadadores: " << numNadadores << ", NumEventos: " << numEventos << std::endl;
        std::cout << "Competencia registrada correctamente." << std::endl;
        std::cout << '\n';
    } else {
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
    }

}



