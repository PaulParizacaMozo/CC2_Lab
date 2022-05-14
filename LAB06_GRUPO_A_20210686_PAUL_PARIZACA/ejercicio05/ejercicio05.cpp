/*
Implementar un programa con clases que haga la búsqueda de un dato almacenado
en una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente
y debe indicar la posición donde se encuentra el dato.
*/

#include <iostream>
#include "Matriz.h"
#include "Matriz.cpp"
using namespace std;

int main(){
  Matriz m1;
  
  bool salir=false;
  int opcion;
  while (salir==false){
    cout<<"\n**MENU**\n1.-Mostrar Matriz\n2.-Buscar numero\n3.-Generar otra matriz\n4.-Salir"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;
    switch(opcion){
      case 1:
	m1.mostrarMatriz();
	break;
      case 2:
	m1.buscarNumero();
	break;
      case 3:
	m1.generarMatriz();
	break;
      case 4:
	salir=true;
	break;
    }
  }
  return 0;
}
