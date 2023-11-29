#include "nadador.h"
#include <iostream>
#include <fstream> 

Nadador::Nadador() : nombre(""), edad(0), club(""), clasificaNadador("") {
}

Nadador::Nadador(const std::string& _nombre, int _edad, const std::string& _club)
    : nombre(_nombre), edad(_edad), club(_club), clasificaNadador("") {
}

std::string Nadador::getNombre() const {
    return nombre;
}

int Nadador::getEdad() const {
    return edad;
}

std::string Nadador::getClub() const {
    return club;
}


void Nadador::guardarNadador() const {
    std::ofstream archivo("nadador.txt", std::ios::app);
    if (archivo.is_open()) {
        archivo << "Nombre: " << nombre << ", Edad: " << edad << ", Club: " << club << std::endl;
        std::cout << "Nadador registrado correctamente." << std::endl;
        std::cout << '\n';
    } else {
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
    }
}

std::string Nadador::ClasificarNadador() const {
    if (edad > 18) {
        return "Primera Fuerza";
    } else {
        return "Juvenil C";
    }
}


