#include <iostream>
using namespace std;

void llenarMatriz(int matriz[][3]){
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      cout<<"Ingrese el dato para ["<<i+1<<"] ["<<j+1<<"] -> ";
      cin>>matriz[i][j];
    }
  }
}

void mostrarMatriz(int matriz[][3]){
  cout<<"\n**MATRIZ**"<<endl;
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      cout<<matriz[i][j]<<"\t";
    }
    cout<<endl;
  }
}

void MayorFila(int matriz[][3]){
  int filaMayor=0;
  int id=0;
  int suma=0;
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      suma += matriz[i][j];
    }
    if (suma>filaMayor){
      filaMayor=suma;
      id=i;
    }
    suma=0;
  }

  cout<<"La fila que suma mayor valor es -> La fila "<<id+1<<" con un valor de "<<filaMayor<<endl;
}

int main(){
  int matriz[3][3];
  llenarMatriz(matriz);
  mostrarMatriz(matriz);
  MayorFila(matriz);
  return 0;
}
