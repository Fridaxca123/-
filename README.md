# Competencia de natación 
Mi proyecto consiste en un sistema para llevar a cabo competencias de natación. En este existiran 4 clases: competencia, evento, nadador y piscina.  A traves de este sistema se podra resgitra la competencia, en base a esta competencia registrada se crean eventos individuales (por ejemplo 400 metros libre de mujeres o 200 metros combinado de hombres) por una relacion de composicion debido a que el evento no puede exisir sin la competencia. A partir del evento se crea por agregacion las clases de nadador y piscina donde se registra la alberca donde se nadara y los datos del nadador(tiempos, participacion en el evento, descalificacion). Finalmente del nadador se desarrolla una subclase de record donde se regitran los record de eventos nadados. 

<img width="461" alt="Screenshot 2023-11-20 at 11 43 54" src="https://github.com/Fridaxca123/-/assets/82528468/a4ca6b20-e433-4313-8491-747c19c7bc12">



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
