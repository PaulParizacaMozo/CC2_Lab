#include "ProductoBancario.h"
#ifndef CUENTA_H
#define CUENTA_H

class Cuenta : public ProductoBancario {
  public:
    Cuenta();
    void setDatos(string,double,int);
    void imprimir();
    ~Cuenta();
};

#endif
