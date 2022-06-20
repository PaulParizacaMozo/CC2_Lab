#include "Nodo.h"
#include "Cola.h"
#include <iostream>
using namespace std;

int main(){
  Cola Cola1;
  bool salir = false;
  int opcion; 
  while (salir == false){
    cout<<"\nMENU DE COLA"<<endl;
    cout<<"1.- Insertar\n2.- Eliminar\n3.- Buscar elemento\n4.- Mostrar Cola\n5.- Salir"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;
    switch(opcion){
      case 1: //Ejercicio01
        int dato;
        cout<<" Ingrese el elemento a insertar -> ";
        cin>>dato;
        Cola1.insertar(dato);
        cout<<"  Elemento insertado con exito."<<endl;
        break;
      case 2: //Ejercicio02
        Cola1.eliminar();
        break;
      case 3: //Ejercicio03
        int elemento;
        cout<<" Ingrese el elemento que desea buscar en la Cola -> ";
        cin>>elemento;
        if(Cola1.buscar(elemento)==true){
          cout<<"  El elemento se encuentra en la Cola."<<endl;
        }
        else{
          cout<<"  El elemento NO se encuentra en la Cola."<<endl;
        }
        break;
      case 4: 
        Cola1.mostrarCola();
        break;
      case 5:
        salir = true;
        break;
    }
  } 
  return 0;
}
