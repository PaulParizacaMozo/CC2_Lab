#include "Nodo.h"
#ifndef PILA_H
#define PILA_H

class Pila{
  private:
    Nodo* pila = nullptr;
  public:
    void push(int);  //Ejercicio01
    void pop();      //Ejercicio02
    bool buscar(int);//Ejercicio03
    //Esta funcion solo fue implementada para mostrar el funcionamiento del programa
    void mostrarPila();
};

#endif
