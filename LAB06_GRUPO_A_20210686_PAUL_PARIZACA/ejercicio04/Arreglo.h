#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>
using namespace std;

class Arreglo{
  private:
    int arreglo[5];
  public:
    Arreglo();
    ~Arreglo();
    bool arregloLleno();
    bool arregloVacio();
    void mostrarArreglo();
    void insertarElemento();
    void retirarElemento();
};

#endif
