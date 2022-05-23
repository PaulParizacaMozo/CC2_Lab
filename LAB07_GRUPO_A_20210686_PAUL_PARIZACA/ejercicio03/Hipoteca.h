#include "Prestamo.h"
#ifndef HIPOTECA_H
#define HIPOTECA_H

class Hipoteca : public Prestamo {
  public:
    Hipoteca();
    void setDatos(string,double,int);
    void imprimir();
    ~Hipoteca();
};

#endif
