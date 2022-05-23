#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta(){
}

Cuenta::~Cuenta(){
}

void Cuenta::setDatos(string cliente, double saldo, int numProductos){
  this->cliente = cliente;
  this->saldo = saldo;
  this->numProductos = numProductos;
}

void Cuenta::imprimir(){
  cout<<"Cliente -> "<<cliente<<endl;
  cout<<"Saldo -> "<<saldo<<endl;
  cout<<"Numero de Productos -> "<<numProductos<<endl<<endl;
}
