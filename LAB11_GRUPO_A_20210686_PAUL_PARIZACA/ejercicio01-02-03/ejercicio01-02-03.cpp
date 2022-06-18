/*
1. Defina una Pila que permita insertar elementos utilizando clases.
2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos
de una Pila.
3. Implemente un algoritmo para buscar elementos de la Pila.
*/
#include "Nodo.h"
#include "Pila.h"
#include <iostream>
//Si compilara los archivos ejercicio01-02-03.cpp, Nodo.cpp y Pila.cpp no es necesario descomentar
//Descomentar si solo compilara el archivo ejercicio01-02-03.cpp.
//#include "Nodo.cpp"
//#include "Pila.cpp"
using namespace std;

int main(){
  Pila Pila1;
  bool salir = false;
  int opcion; 
  while (salir == false){
    cout<<"\nMENU DE PILA"<<endl;
    cout<<"1.- Push\n2.- Pop\n3.- Buscar elemento\n4.- Mostrar Pila\n5.- Salir"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;
    switch(opcion){
      case 1: //Ejercicio01
        int dato;
        cout<<" Ingrese el elemento a insertar -> ";
        cin>>dato;
        Pila1.push(dato);
        cout<<"  Elemento insertado con exito."<<endl;
        break;
      case 2: //Ejercicio02
        Pila1.pop();
        break;
      case 3: //Ejercicio03
        int elemento;
        cout<<" Ingrese el elemento que desea buscar en la pila -> ";
        cin>>elemento;
        if(Pila1.buscar(elemento)==true){
          cout<<"  El elemento se encuentra en la PILA."<<endl;
        }
        else{
          cout<<"  El elemento NO se encuentra en la PILA."<<endl;
        }
        break;
      case 4:
        Pila1.mostrarPila();
        break;
      case 5:
        salir = true;
        break;
    }
  } 
  return 0;
}
