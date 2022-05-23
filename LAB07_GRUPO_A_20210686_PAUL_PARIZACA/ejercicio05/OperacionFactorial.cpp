#include "OperacionFactorial.h"
#include <iostream>
using namespace std;

OperacionFactorial::OperacionFactorial(int operador) : OperacionBase(operador){
}

OperacionFactorial::OperacionFactorial(){
}

OperacionFactorial::~OperacionFactorial(){
}

int OperacionFactorial::devolverFactorial(){
  int factorial=1;
  if (getOperador() == 0){
    factorial = 1;
  }
  else{
    if(getOperador()>0){
      for(int i=getOperador(); i>0; i--){
	factorial *= i;
      }
    }
    else{
      factorial = 0;
    }
  }
  return factorial;
}

