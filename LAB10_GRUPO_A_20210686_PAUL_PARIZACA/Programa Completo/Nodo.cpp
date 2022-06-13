#include "Nodo.h"
#include <iostream>
using namespace std;

void Nodo::setDato(int dato){
  this->dato = dato;
}

int Nodo::getDato(){
  return dato;
}

void Nodo::setSiguiente(Nodo* sig){
  this->siguiente = sig;
}

Nodo* Nodo::getSiguiente(){
  return siguiente;
}
