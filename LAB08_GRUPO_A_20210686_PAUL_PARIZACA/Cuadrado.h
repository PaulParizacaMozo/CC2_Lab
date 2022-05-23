#include "Rectangulo.h"
#ifndef CUADRADO_H
#define CUADRADO_H

class Cuadrado : public Rectangulo{
  public:
    Cuadrado(string,int,int,string,int,int);
    void imprimir();
    float getArea();
    ~Cuadrado();
};

#endif

