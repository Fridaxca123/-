 #ifndef NADADOR_H
#define NADADOR_H

#include <iostream>

class Nadador {
private:
    std::string nombre;
    int edad;
    std::string club;
    std::string clasificaNadador;

public:
    Nadador();
    Nadador(const std::string& _nombre, int _edad, const std::string& _club);
    std::string getNombre() const;
    int getEdad() const;
    std::string getClub() const;
    std::string ClasificarNadador() const;

    void guardarNadador() const;
};

#endif  // NADADOR_H.  


