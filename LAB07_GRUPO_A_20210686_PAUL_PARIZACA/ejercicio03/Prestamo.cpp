#include "Prestamo.h"
#include <iostream>
using namespace std;

Prestamo::Prestamo(){
}

Prestamo::~Prestamo(){
}

void Prestamo::setDatos(string cliente, double saldo, int numProductos){
  this->cliente = cliente;
  this->saldo = saldo;
  this->numProductos = numProductos;
}

void Prestamo::imprimir(){
  cout<<"Cliente -> "<<cliente<<endl;
  cout<<"Saldo -> "<<saldo<<endl;
  cout<<"Numero de Productos -> "<<numProductos<<endl<<endl;
}
