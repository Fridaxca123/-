#ifndef FONDO_H
#define FONDO_H

#include "evento.h"

class Fondo : private Evento {
private:
    float record;
    float tiempo;

public:
    Fondo();
    Fondo(float _record, float _tiempo); 
    float getTiempo() const;
    void setTiempo(float _tiempo); 
    float getRecord() const; 
    void setRecord(float _record); 
};

#endif  // FONDO_H



