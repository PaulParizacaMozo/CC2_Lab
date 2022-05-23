#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include <iostream>
using namespace std;

class ProductoBancario{
  public: 
    string cliente;
    double saldo;
    int numProductos;
  //Metodos
    ProductoBancario();
    virtual void setDatos(string,double,int);
    virtual void imprimir();
    ~ProductoBancario();
};

#endif
