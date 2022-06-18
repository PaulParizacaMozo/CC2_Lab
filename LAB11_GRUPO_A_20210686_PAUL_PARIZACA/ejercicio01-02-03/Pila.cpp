#include "Pila.h"
#include <iostream>
using namespace std;

//Ejercicio01
void Pila::push(int dato){
  Nodo* nuevoNodo = new Nodo();
  nuevoNodo->setDato(dato);
  nuevoNodo->setSiguiente(pila);
  pila = nuevoNodo;
}

//Ejercicio02
void Pila::pop(){
  if (pila==nullptr){
    cout<<" La PILA esta vacia, no hay nada que eliminar."<<endl;
  }
  else{
    Nodo* aux = pila;
    pila = aux->getSiguiente();
    delete aux;
    cout<<"  Elemento eliminado con exito."<<endl;
  }
}

//Ejercicio03
bool Pila::buscar(int dato){
  int contador=0;
  if(pila == nullptr){
    return false;
  }
  else{
    Nodo* aux = pila;
    while(aux != nullptr){
      contador++;
      if(aux->getDato() == dato){
        cout<<"  En la posicion "<<contador<<" se encuentra el elemento"<<endl;
        return true;
      }
      aux = aux->getSiguiente();
    }
  }
  return false;
}

//Esta funcion solo fue implementada para mostrar el funcionamiento del programa
void Pila::mostrarPila(){
  if(pila != nullptr){
    Nodo* aux = pila;
    cout<<" Elementos -> ";
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
    cout<<" Elementos -> La Pila esta vacia."<<endl;
  }
  cout<<endl;
}
