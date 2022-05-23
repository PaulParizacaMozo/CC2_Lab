#include "ProductoBancario.h"
#ifndef PRESTAMO_H
#define PRESTAMO_H

class Prestamo : protected ProductoBancario{
  public:
    Prestamo();
    void setDatos(string,double,int);
    void imprimir();
    ~Prestamo();
};

#endif
