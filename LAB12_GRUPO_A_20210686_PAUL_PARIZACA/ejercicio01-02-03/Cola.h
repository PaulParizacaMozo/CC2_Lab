#include "Nodo.h"
#ifndef COLA_H
#define COLA_H

class Cola{
  private:
    Nodo* primero = nullptr;
    Nodo* ultimo = primero;
  public:
    void insertar(int); //Ejercicio01
    void eliminar();    //Ejercicio02
    bool buscar(int);   //Ejercicio03
    //La funcion mostrarCola fue implementada para mostrar el funcionamiento del programa
    void mostrarCola();
};

#endif
