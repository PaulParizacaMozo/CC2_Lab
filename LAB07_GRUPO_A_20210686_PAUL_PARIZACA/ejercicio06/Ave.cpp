#include "Ave.h"
#include <iostream>
using namespace std;

Ave::Ave(float altura, string color, float peso){
  this->altura = altura;
  this->color = color;
  this->peso = peso;
}

Ave::~Ave(){
}

void Ave::comer(){
}

void Ave::informacion(){
  cout<<"Altura -> "<<altura<<endl;
  cout<<"Color -> "<<color<<endl;
  cout<<"Peso -> "<<peso<<endl;
}

void Ave::dormir(){
}
