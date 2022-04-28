#include <iostream>
using namespace std;

void ImprimirTriangulo(int numero){
  for (int i=1; i<=numero; i++){
    for (int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
  int numero;
  cout<<"Ingrese un valor entero para la altura del triangulo -> ";
  cin>>numero;
  ImprimirTriangulo(numero);

  return 0;
}
