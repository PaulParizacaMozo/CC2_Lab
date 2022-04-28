#include <iostream>
using namespace std;

int nMayor(int *arreglo, int cantidad){
  int aux=arreglo[0];
  for (int i=1; i<cantidad; i++){
    if(aux<arreglo[i]){
      aux=arreglo[i];
    }
  }
  return aux;
}

int nMenor(int *arreglo, int cantidad){
  int aux=arreglo[0];
  for (int i=1; i<cantidad; i++){
    if(aux>arreglo[i]){
      aux=arreglo[i];
    }
  }
  return aux;
}

float nMedia(int *arreglo, int cantidad){
  int suma=0;

  for (int i=0; i<cantidad; i++){
    suma+=arreglo[i];
  }
  return suma/float(cantidad);
}

int main (){
  int cantidad,NumMayor,NumMenor;
  float Media;
  int *arreglo;
  cout<<"Ingrese la cantidad de numeros que ingresara -> ";
  cin>>cantidad;
  arreglo= new int[cantidad];
  for (int i=0; i<cantidad; i++){
    cout<<"Ingrese numero "<<i+1<<" -> ";
    cin>>arreglo[i];
  }
  cout<<endl;
  NumMayor=nMayor(arreglo,cantidad);
  cout<<"El numero mayor es -> "<<NumMayor<<endl;
  NumMenor=nMenor(arreglo,cantidad);
  cout<<"El numero menor es -> "<<NumMenor<<endl;
  Media=nMedia(arreglo,cantidad);
  cout<<"La media de los numeros es -> "<<Media<<endl;

  return 0;
}
