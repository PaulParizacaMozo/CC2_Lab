#include "ProductoBancario.h"
#include <iostream>
using namespace std;

ProductoBancario::ProductoBancario(){
}

ProductoBancario::~ProductoBancario(){
}

void ProductoBancario::setDatos(string cliente, double saldo, int numProductos){
  this->cliente = cliente;
  this->saldo = saldo;
  this->numProductos = numProductos;
}

void ProductoBancario::imprimir(){
  cout<<"Cliente -> "<<cliente<<endl;
  cout<<"Saldo -> "<<saldo<<endl;
  cout<<"Numero de Productos -> "<<numProductos<<endl<<endl;
}
