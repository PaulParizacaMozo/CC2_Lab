#include "Objeto.h"
#include <iostream>
using namespace std;

Objeto::Objeto(){
  this->objeto = "";
}

Objeto::~Objeto(){
};

void Objeto::setObjeto(string objeto){
  this->objeto = objeto;
}

void Objeto::mostrarObjeto(){
  cout<<objeto<<" de color ";
  mostrarColor();
  cout<<" y material de ";
  mostrarMaterial();
  cout<<endl;
}
