#include "Matriz.h"
#include <iostream>
#include <time.h>

using namespace std;

Matriz::Matriz(){
  int numRan;
  int contador=0;
  srand(time(NULL));
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      while(true){
	numRan = 1+rand()%(10-1);
	if(seEncuentra(numRan)==false){
	  lista[contador]=numRan; 
	  matriz[i][j]=numRan;
	  contador++;
	  break;
	}
      }
    }
  }
}

Matriz::~Matriz(){
}

void Matriz::generarMatriz(){
  //Limpia la lista del 1 al 9 con 0 
  for (int i=0; i<9; i++){
    lista[i]=0;
  }
  //construye una nueva matriz
  int numRan;
  int contador=0;
  srand(time(NULL));
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      while(true){
	numRan = 1+rand()%(10-1);
	if(seEncuentra(numRan)==false){
	  lista[contador]=numRan; 
	  matriz[i][j]=numRan;
	  contador++;
	  break;
	}
      }
    }
  }
  cout<<" Se genero otra matriz con exito."<<endl;
}

bool Matriz::seEncuentra(int numero){
  for (int i=0; i<9; i++){
    if(lista[i]==numero){
      return true;
    }
  }
  return false;
}

void Matriz::buscarNumero(){
  int numero;
  cout<<"\n Ingrese un numero para saber la posicion dentro de la matriz -> ";
  cin>>numero;
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      if(matriz[i][j]==numero){
	
      cout<<"  La posicion del numero "<<numero<<" es -> "<<"Matriz ["<<i<<"]["<<j<<"]"<<endl;
      cout<<"  Fila -> "<<i<<"\t Columna -> "<<j<<endl;
      }
    }
  }
}

void Matriz::mostrarMatriz(){
  cout<<"\n**MATRIZ**"<<endl;
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      cout<<matriz[i][j]<<"   ";
    }
    cout<<endl;
  }
}
