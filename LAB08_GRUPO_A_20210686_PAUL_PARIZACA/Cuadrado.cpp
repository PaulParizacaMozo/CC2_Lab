#include "Cuadrado.h"
#include <iostream>
using namespace std;

Cuadrado::Cuadrado(string color,int x,int y,string nombre,int lado,int ladoM):Rectangulo(color,x,y,nombre,lado,ladoM){
}

Cuadrado::~Cuadrado(){}

void Cuadrado::imprimir(){
  cout<<" Nombre -> "<<nombre<<endl;
  cout<<" Color -> "<<color<<endl;
  cout<<" Punto ->"<<endl;
  pnt.imprimirPunto();
  cout<<" Radio -> "<<ladoMenor<<endl;
}

float Cuadrado::getArea(){
  return ladoMenor*ladoMayor;
}
