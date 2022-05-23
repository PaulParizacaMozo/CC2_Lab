#include <iostream>
#include "OperacionBase.h"
#include "OperacionFactorial.h"

//Descomentar si solo compilara el archivo ejercicio05.cpp
//Si compilara ejercicio05.cpp, OperacionBase.cpp y OperacionFactorial.cpp no es necesario descomentar

//#include "OperacionBase.cpp"
//#include "OperacionFactorial.cpp"

using namespace std;

int main(){
  OperacionFactorial num1(10);
  cout<<"El factorial del numero "<<num1.getOperador()<<" es -> "<<num1.devolverFactorial()<<endl<<endl;
  
  OperacionFactorial num2(0);
  cout<<"El factorial del numero "<<num2.getOperador()<<" es -> "<<num2.devolverFactorial()<<endl<<endl;
  
  OperacionFactorial num3(4);
  cout<<"El factorial del numero "<<num3.getOperador()<<" es -> "<<num3.devolverFactorial()<<endl<<endl;

  return 0;
}
