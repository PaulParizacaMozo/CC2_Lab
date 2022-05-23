#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Forma.h"

class Rectangulo : public Forma{
  protected:
    int ladoMenor;
    int ladoMayor;
  public:
    Rectangulo(string,int,int,string,int,int);
    void imprimir();
    void calcularArea();
    void calcularPerimetro();
    void cambiarTam(float);
    float getArea();
    ~Rectangulo();
};

#endif
