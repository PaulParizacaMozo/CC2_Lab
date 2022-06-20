#include "Nodo.h"
#ifndef COLA_H
#define COLA_H

class Cola{
  private:
    Nodo* primero = nullptr;
    Nodo* ultimo = primero;
  public:
    void push(int);
    void pop();
    int primerElemento();
    void mostrarCola();
};

#endif
