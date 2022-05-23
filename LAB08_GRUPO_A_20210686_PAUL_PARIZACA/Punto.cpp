#include "Punto.h"
#include <iostream>
using namespace std;

Punto::Punto(){
}

Punto::~Punto(){}

void Punto::imprimirPunto(){
  cout<<"  Posicion X -> "<<x<<endl;
  cout<<"  Posicion Y -> "<<y<<endl;
}

void Punto::setPunto(int x, int y){
  this->x = x;
  this->y = y;
}
