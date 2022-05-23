#include "Rectangulo.h"
#include <iostream>
using namespace std;

Rectangulo::Rectangulo(string color, int x,int y, string nombre, int ladoMenor, int ladoMayor) : Forma(color,x,y,nombre){
  this->ladoMenor = ladoMenor;
  this->ladoMayor = ladoMayor;
}

Rectangulo::~Rectangulo(){}

void Rectangulo::imprimir(){
  cout<<" Nombre -> "<<nombre<<endl;
  cout<<" Color -> "<<color<<endl;
  cout<<" Punto ->"<<endl;
  pnt.imprimirPunto();
  cout<<" Lado Menor -> "<<ladoMenor<<endl;
  cout<<" Lado Mayor -> "<<ladoMayor<<endl;
}

void Rectangulo::calcularArea(){
  cout<<"El area del rectangulo es -> "<<ladoMenor*ladoMayor<<endl;
}

void Rectangulo::calcularPerimetro(){
  cout<<"El perimetro del rectangulo es -> "<<(2*ladoMayor)+(2*ladoMenor)<<endl;
}

void Rectangulo::cambiarTam(float escala){
  this->ladoMenor = escala*ladoMenor;
  this->ladoMayor = escala*ladoMayor;
}

float Rectangulo::getArea(){
  return ladoMenor*ladoMayor;
}


