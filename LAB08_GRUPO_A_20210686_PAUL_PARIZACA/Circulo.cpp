#include "Circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(string color,int x,int y,string nombre,int R,int r):Elipse(color,x,y,nombre,R,r){
}

Circulo::~Circulo(){};

void Circulo::imprimir(){
  cout<<" Nombre -> "<<nombre<<endl;
  cout<<" Color -> "<<color<<endl;
  cout<<" Punto ->"<<endl;
  pnt.imprimirPunto();
  cout<<" Radio -> "<<radioMenor<<endl;
}

float Circulo::getArea(){
  return 3.14*(radioMenor*radioMayor);
}

