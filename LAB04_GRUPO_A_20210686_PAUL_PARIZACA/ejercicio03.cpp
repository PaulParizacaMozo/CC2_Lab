#include <iostream>
#include <time.h>
using namespace std;

void ingresar(int numeros[][3]){
  for (int i=0; i<5; i++){
    for (int j=0; j<3; j++){
      cout<<"Ingrese el dato para ["<<i<<"] ["<<j<<"] -> ";
      cin>>numeros[i][j];
    }
  }
}

void mostrar(int numeros[][3]){
  cout<<"\nMatriz 5x3"<<endl;
  for (int i=0; i<5; i++){
    for (int j=0; j<3; j++){
      cout<<numeros[i][j]<<" ";
    }
    cout<<endl;
  }
}

void imprimirSumaPares(int numeros[][3]){
  int suma=0;
  for (int i=0; i<5; i++){
    if(i%2==0){
      for (int j=0; j<3; j++){
	suma += numeros[i][j];
      }
    cout<<"La suma de la fila "<<i<<" es igual a -> "<<suma<<endl;
    suma=0;
    }
  }
} 

int main(){
  int numeros[5][3];
  ingresar(numeros);
  mostrar(numeros);
  imprimirSumaPares(numeros);
  return 0;
}
