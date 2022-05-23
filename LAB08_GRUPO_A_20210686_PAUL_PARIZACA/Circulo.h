#include "Elipse.h"
#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : public Elipse{
  public:
    Circulo(string,int,int,string,int,int);
    void imprimir();
    float getArea();
    ~Circulo();
};

#endif
