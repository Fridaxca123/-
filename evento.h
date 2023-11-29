#ifndef EVENTO_H
#define EVENTO_H

#include <string>

class Evento {
private:
    int numEvento;
    std::string estilo;
    int distancia;

public:
    Evento();
    Evento(int _numEvento, const std::string& _estilo, int _distancia);

    int getNumEvento() const;
    std::string getEstilo() const;
    int getDistancia() const;

    void guardarEvento() const;
    std::string ClasificarEvento() const;
};

#endif  // EVENTO_H



 

