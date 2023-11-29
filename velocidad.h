#ifndef VELOCIDAD_H
#define VELOCIDAD_H

#include "evento.h"

class Velocidad: private Evento {
private:
    float record;
    float tiempo;

public:
    Velocidad();
    Velocidad(float _record, float _tiempo); 
    float getTiempo() const;
    void setTiempo(float _tiempo); 
    float getRecord() const; 
    void setRecord(float _record); 
};

#endif  // VELOCIDAD_H