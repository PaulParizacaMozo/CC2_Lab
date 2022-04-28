#include <iostream>
using namespace std;

int potencia(int base, int exponente){
  int pot=1;
  for (int i=0; i<exponente; i++){
    pot *= base;
  }
  return pot;
}

int main(){
  
  int NumExponente,NumBase,resultado;

  cout<<"Ingrese el numero (Base) -> ";
  cin>>NumBase;
  cout<<"Ingrese el numero (Exponente) -> ";
  cin>>NumExponente;
  
  resultado=potencia(NumBase,NumExponente);
  cout<<"El resultador es -> "<<resultado<<endl;

  return 0;
}
