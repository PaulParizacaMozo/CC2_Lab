#include "ClaseDisco.h"
#include <iostream>
using namespace std;

ClaseDisco::ClaseDisco(string tipo, string contenido, string receptor, string capacidad) : ClaseMultimedia(tipo,contenido,receptor){
  this->capacidad = capacidad;
}

ClaseDisco::~ClaseDisco(){
}

void ClaseDisco::imprimirDisco(){
  imprimirMultimedia();
  cout<<" Capacidad de Almacenamiento del Disco -> "<<capacidad<<endl;
}
