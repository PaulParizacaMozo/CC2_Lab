#include <iostream>
#include<time.h>
using namespace std;

void llenarMatriz(int matriz[][5]){
  int num;
  srand(time(NULL));
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      num=1+rand()%(21-1);
      matriz[i][j]=num;
    }
  }
}

void mostrarMatriz(int matriz[][5]){
  cout<<"\nMATRIZ\n\n";
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      cout<<matriz[i][j]<<"\t";
    }
    cout<<endl<<endl;
  }
}

void moverColumnasDerecha(int matriz[][5]){
  for (int i=0; i<5 ; i++){
    int aux;
    int aux1;
    aux=matriz[i][4];
    for (int j=0; j<5; j++){  
      aux1=matriz[i][j];
      matriz[i][j]=aux;
      aux=aux1;
    }
  }
}

void moverFilasAbajo(int matriz[][5]){
  for (int i=0; i<5 ; i++){
    int aux;
    int aux1;
    aux=matriz[4][i];
    for (int j=0; j<5; j++){  
      aux1=matriz[j][i];
      matriz[j][i]=aux;
      aux=aux1;
    }
  }
}

void moverColumnasIzquierda(int matriz[][5]){
  for (int i=0; i<5 ; i++){
    int aux;
    int aux1;
    aux=matriz[i][0];
    for (int j=4; j>=0; j--){  
      aux1=matriz[i][j];
      matriz[i][j]=aux;
      aux=aux1;
    }
  }
}

void moverFilasArriba(int matriz[][5]){
  for (int i=0; i<5 ; i++){
    int aux;
    int aux1;
    aux=matriz[0][i];
    for (int j=4; j>=0; j--){  
      aux1=matriz[j][i];
      matriz[j][i]=aux;
      aux=aux1;
    }
  }
}



int main(){
  int matriz[5][5];
  llenarMatriz(matriz);
  cout<<"Se genero una matriz aleatoria\n"<<endl;
  mostrarMatriz(matriz);
  int opcion;
  bool opt=true;

  while(opt==true){
    cout<<"**OPCIONES**"<<endl;
    cout<<"1.- Mover hacia arriba"<<endl;
    cout<<"2.- Mover hacia abajo"<<endl;
    cout<<"3.- Mover hacia la derecha"<<endl;
    cout<<"4.- Mover hacia la izquierda"<<endl;
    cout<<"5.- SALIR"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;

    switch(opcion){
      case 1:
	moverFilasArriba(matriz);
	mostrarMatriz(matriz);
	break;
      case 2:
	moverFilasAbajo(matriz);
	mostrarMatriz(matriz);
	break;
      case 3:
	moverColumnasDerecha(matriz);
	mostrarMatriz(matriz);
	break;
      case 4:
	moverColumnasIzquierda(matriz);
	mostrarMatriz(matriz);
	break;
      case 5:
	opt=false;
	break;
    }
  }
  
  return 0;
}
