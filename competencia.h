#ifndef COMPETENCIA_H
#define COMPETENCIA_H
#include <string>

class Competencia {
private:
    std::string nombre;
    std::string fecha;
    std::string lugar;
    int numNadadores;
    int numEventos;  

public:
    Competencia();
    Competencia(const std::string& nombre, const std::string& fecha, const std::string& lugar, int numNadadores, int numEventos); 
    std::string getNombre() const;
    std::string getFecha() const;
    std::string getLugar() const;
    int getNumNadadores() const;
    int getNumEventos() const; 
    void guardarCompetencia() const;
};

#endif  // COMPETENCIA_H.


