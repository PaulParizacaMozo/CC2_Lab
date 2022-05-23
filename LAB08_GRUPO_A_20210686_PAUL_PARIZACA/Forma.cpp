#include "Forma.h"
#include "Punto.h"
#include <iostream>
using namespace std;

Forma::Forma(string color, int x, int y, string nombre){
    this->color = color;
    this->pnt.setPunto(x,y);
    this->nombre = nombre;
}

Forma::Forma(){};

Forma::~Forma(){};

void Forma::imprimir(){
  cout<<" Nombre -> "<<nombre<<endl;
  cout<<" Color -> "<<color<<endl;
  cout<<" Punto ->"<<endl;
  pnt.imprimirPunto();
}

void Forma::setColor(string color){
  this->color = color;
}

string Forma::getColor(){
  return color;
}

void Forma::setPunto(int x, int y){
    this->pnt.setPunto(x,y);
}

void Forma::calcularArea(){};

void Forma::calcularPerimetro(){};

float Forma::getArea(){
  return 0;
}
