#include "CuentaJoven.h"
#include <iostream>
using namespace std;

CuentaJoven::CuentaJoven(){
  this->cliente = "Pedro";
}

CuentaJoven::~CuentaJoven(){
}

void CuentaJoven::setDatos(string cliente, double saldo, int numProductos){
  this->cliente = cliente;
  this->saldo = saldo;
  this->numProductos = numProductos;
}

void CuentaJoven::imprimir(){
  cout<<"Cliente -> "<<cliente<<endl;
  cout<<"Saldo -> "<<saldo<<endl;
  cout<<"Numero de Productos -> "<<numProductos<<endl<<endl;
}
