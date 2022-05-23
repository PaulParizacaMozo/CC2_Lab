#include "Elipse.h"
#include <iostream>
using namespace std;

Elipse::Elipse(string color, int x,int y, string nombre, int radioMenor, int radioMayor) : Forma(color,x,y,nombre){
  this->radioMenor = radioMenor;
  this->radioMayor = radioMayor;
}

Elipse::~Elipse(){}

void Elipse::imprimir(){
  cout<<" Nombre -> "<<nombre<<endl;
  cout<<" Color -> "<<color<<endl;
  cout<<" Punto ->"<<endl;
  pnt.imprimirPunto();
  cout<<" Radio Menor -> "<<radioMenor<<endl;
  cout<<" Radio Mayor -> "<<radioMayor<<endl;
}

void Elipse::calcularArea(){
  cout<<"El area del Elipse es -> "<<3.14*(radioMenor*radioMayor)<<endl;
}

void Elipse::calcularPerimetro(){
  cout<<"El perimetro del Elipse es -> "<<3.14*(radioMayor+radioMenor)<<endl;
}

void Elipse::cambiarTam(float escala){
  this->radioMenor = escala*radioMenor;
  this->radioMayor = escala*radioMayor;
}

float Elipse::getArea(){
  return 3.14*(radioMenor*radioMayor);
}
