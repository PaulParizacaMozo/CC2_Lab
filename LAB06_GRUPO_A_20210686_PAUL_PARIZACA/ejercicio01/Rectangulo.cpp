#include <iostream>
#include "Rectangulo.h"

using namespace std;

Rectangulo::Rectangulo(int largo, int ancho){
  this->largo = largo;
  this->ancho = ancho;
}

Rectangulo::~Rectangulo(){
}

void Rectangulo::setAncho(int ancho){
  this->ancho = ancho;
}

void Rectangulo::setLargo(int largo){
  this->largo = largo;
}

void Rectangulo::CalcularArea(){
  area = largo*ancho;
  cout<<"El area es -> "<<area<<endl;
}

void Rectangulo::CalcularPerimetro(){
  perimetro = (largo * 2) + (ancho * 2);
  cout<<"El perimetro es -> "<<perimetro<<endl;
}

int Rectangulo::getArea(){
  return area;
}

int Rectangulo::getPerimetro(){
  return perimetro;
}
