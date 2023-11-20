# Frida proyecto :)
Mi proyecto consiste en un sistema para llevar a cabo competencias de natación. En este existiran 4 clases: competencia, evento, nadador y piscina.  A traves de este sistema se podra resgitra la competencia, organizar el numero de eventos, registrar y asignar a los nadadores 
<img width="866" alt="Screenshot 2023-11-19 at 19 16 44" src="https://github.com/Fridaxca123/-/assets/82528468/f45b7b9c-c794-4000-8f70-fc6b7b091b77">



#include <iostream>
#include <string>
#include <vector>

class Competencia {
private:
    int id;
    std::string nombre;
    std::string fecha;
    std::string lugar;

public:
    explicit Competencia(int _id, const std::string& _nombre, const std::string& _fecha, const std::string& _lugar)
        : id(_id), nombre(_nombre), fecha(_fecha), lugar(_lugar) {}

    void organizarEvento() {
        std::cout << "Organizando evento en la competencia " << nombre << std::endl;
    }
};

class Evento {
private:
    int id;
    std::string nombre;
    std::string estilo;
    int distancia;
    std::string categoriaEdad;

public:
    Evento(int _id, const std::string& _nombre, const std::string& _estilo, int _distancia, const std::string& _categoriaEdad)
        : id(_id), nombre(_nombre), estilo(_estilo), distancia(_distancia), categoriaEdad(_categoriaEdad) {}

    void registrarNadador() {
        std::cout << "Registrando nadador para el evento " << nombre << std::endl;
    }

    void asignarPiscina() {
        std::cout << "Asignando piscina para el evento " << nombre << std::endl;
    }
};

class Nadador {
private:
    int id;
    std::string nombre;
    int edad;
    std::string club;

public:
    Nadador(int _id, const std::string& _nombre, int _edad, const std::string& _club)
        : id(_id), nombre(_nombre), edad(_edad), club(_club) {}

    void participarEnEvento() {
        std::cout << "El nadador " << nombre << " participa en un evento." << std::endl;
    }
};

class Piscina {
private:
    int id;
    std::string nombre;
    std::string ubicacion;

public:
    Piscina(int _id, const std::string& _nombre, const std::string& _ubicacion)
        : id(_id), nombre(_nombre), ubicacion(_ubicacion) {}

    void asignarEvento() {
        std::cout << "Asignando evento a la piscina " << nombre << std::endl;
    }
};
