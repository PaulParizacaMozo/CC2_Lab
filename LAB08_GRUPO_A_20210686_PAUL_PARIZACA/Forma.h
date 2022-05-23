#ifndef FORMA_H
#define FORMA_H
#include <iostream>
#include "Punto.h"
using namespace std;

class Forma{
  protected:
    string color;
    Punto pnt;
    string nombre;
  public:
    Forma();
    Forma(string,int,int,string);
    virtual void imprimir();
    void setColor(string);
    string getColor();
    void setPunto(int,int);
    virtual void calcularArea();
    virtual void calcularPerimetro();
    virtual float getArea();
    ~Forma();
};

#endif
