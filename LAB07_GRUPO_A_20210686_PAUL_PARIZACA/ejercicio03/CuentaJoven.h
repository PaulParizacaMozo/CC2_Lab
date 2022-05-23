#include "Cuenta.h"
#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H

class CuentaJoven : private Cuenta{
  public:
    CuentaJoven();
    void setDatos(string,double,int);
    void imprimir();
    ~CuentaJoven();
};

#endif
