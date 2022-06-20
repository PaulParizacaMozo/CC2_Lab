#include "Cola.h"
#include <iostream>
using namespace std;

//Ejercicio01
void Cola::insertar(int dato){
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

//Ejercicio02
void Cola::eliminar(){
  if (primero==nullptr){
    cout<<" La Cola esta vacia, no hay nada que eliminar."<<endl;
  }
  else{
    Nodo* aux = primero;
    if(aux->getSiguiente() == nullptr){
      primero = nullptr;
      ultimo = nullptr;
      delete aux;
      cout<<"  Nodo eliminado con exito"<<endl;
    }
    else{
      primero = primero->getSiguiente();
      delete aux;
      cout<<"  Nodo eliminado con exito"<<endl;
    }
  }
}

//Ejercicio03
bool Cola::buscar(int dato){
  int contador=0;
  if(primero == nullptr){
    return false;
  }
  else{
    Nodo* aux = primero;
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

void Cola::mostrarCola(){
  if(primero != nullptr){
    Nodo* aux = primero;
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
    cout<<" Elementos -> La Cola esta vacia."<<endl;
  }
  cout<<endl;
}
