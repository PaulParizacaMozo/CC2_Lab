#include <iostream>
using namespace std;

float promedio(int *arreglo, int cantidad){
  int suma=0;

  for (int i=0; i<cantidad; i++){
    suma+=arreglo[i];
  }
  return suma/float(cantidad);
}

int main(){
  int cantidad;
  float Prom;
  int *arreglo;
  cout<<"Ingrese la cantidad de numeros que ingresara -> ";
  cin>>cantidad;
  arreglo= new int[cantidad];
  for (int i=0; i<cantidad; i++){
    cout<<"Ingrese numero "<<i+1<<" -> ";
    cin>>arreglo[i];
  }
  cout<<endl;
  Prom=promedio(arreglo,cantidad);
  cout<<"El promedio es de -> "<<Prom<<endl;
  return 0;
}
