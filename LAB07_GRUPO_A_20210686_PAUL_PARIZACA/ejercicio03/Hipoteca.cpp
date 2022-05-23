#include "Hipoteca.h"
#include <iostream>
using namespace std;

Hipoteca::Hipoteca(){
  this->cliente = "Juan";
}

Hipoteca::~Hipoteca(){
}

void Hipoteca::setDatos(string cliente, double saldo, int numProductos){
  this->cliente = cliente;
  this->saldo = saldo;
  this->numProductos = numProductos;
}

void Hipoteca::imprimir(){
  cout<<"Cliente -> "<<cliente<<endl;
  cout<<"Saldo -> "<<saldo<<endl;
  cout<<"Numero de Productos -> "<<numProductos<<endl<<endl;
}
