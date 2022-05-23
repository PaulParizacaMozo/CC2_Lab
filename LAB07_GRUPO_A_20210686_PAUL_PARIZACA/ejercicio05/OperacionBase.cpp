#include "OperacionBase.h"
#include <iostream>
using namespace std;

OperacionBase::OperacionBase(){
  this->operador = 0;
}

OperacionBase::OperacionBase(int operador){
  this->operador = operador;
}

OperacionBase::~OperacionBase(){
}

void OperacionBase::setOperador(int operador){
  this->operador = operador;
}

int OperacionBase::getOperador(){
  return operador;
}
