#include "Cola.h"
#include <iostream>
using namespace std;

void Cola::push(int dato){
  Nodo* nuevoNodo = new Nodo();
  nuevoNodo->setDato(dato);
  Nodo* aux = primero;
  Nodo* aux2;
  if (aux == nullptr){
    primero = nuevoNodo;
    ultimo = primero;
    nuevoNodo->setSiguiente(aux);
  }
  else{
    while (aux->getSiguiente() != nullptr){
      aux = aux->getSiguiente();
    }
    aux2 = aux->getSiguiente();
    aux->setSiguiente(nuevoNodo);
    nuevoNodo->setSiguiente(aux2);
    ultimo = nuevoNodo;
  }
}

void Cola::pop(){
  if (primero==nullptr){
    cout<<" La Cola esta vacia, no hay nada que eliminar."<<endl;
  }
  else{
    Nodo* aux = primero;
    if(aux->getSiguiente() == nullptr){
      primero = nullptr;
      ultimo = nullptr;
      delete aux;
    }
    else{
      primero = primero->getSiguiente();
      delete aux;
    }
  }
}

int Cola::primerElemento(){
  return primero->getDato();
}

void Cola::mostrarCola(){
  if(primero != nullptr){
    Nodo* aux = primero;
    cout<<" -> ";
    while (aux != nullptr){
      if (aux->getSiguiente()==nullptr){
	      cout<<aux->getDato()<<" ";
      }
      else{
	      cout<<aux->getDato()<<" - ";
      }
      aux = aux->getSiguiente();
    } 
  }
  else{
    cout<<" -> La Cola esta vacia."<<endl;
  }
  cout<<endl;
}
