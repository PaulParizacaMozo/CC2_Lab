#include <iostream>
#include "Nodo.h"
using namespace std;

void Nodo::setDato(int dato){
  this->dato = dato;
}

int Nodo::getDato(){
  return dato;
}

void Nodo::setSiguiente(Nodo* siguiente){
  this->siguiente = siguiente;
}

Nodo* Nodo::getSiguiente(){
  return siguiente;
}
