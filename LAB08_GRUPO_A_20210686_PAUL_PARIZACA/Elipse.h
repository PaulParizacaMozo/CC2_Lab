#include "Forma.h"
#ifndef ELIPSE_H
#define ELIPSE_H

class Elipse : public Forma{
  protected:
    int radioMenor;
    int radioMayor;
  public:
    Elipse(string,int,int,string,int,int);
    void imprimir();
    void calcularArea();
    void calcularPerimetro();
    void cambiarTam(float);
    float getArea();
    ~Elipse();
};

#endif
