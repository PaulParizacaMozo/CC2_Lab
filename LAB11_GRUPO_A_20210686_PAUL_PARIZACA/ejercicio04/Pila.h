#include "Nodo.h"
#ifndef PILA_H
#define PILA_H
#include <iostream>

class Pila{
  private:
    Nodo* pila = nullptr;
    std::string nombre;
  public:
    Pila();
    Pila(std::string);
    std::string getNombre();
    void push(int);
    void pop();
    int top();
    void mostrarPila();
};

#endif
