#include <iostream>
#include "Nodo.h"
#include "Lista.h"
//#include "Nodo.cpp"
//#include "Lista.cpp"
using namespace std;

int main(){
  Lista ListaEnlazada1; //Se creo la lista enlazada
  int opcion;
  bool salir = false;
  while (salir == false){
    cout<<"\n**MENU**"<<endl;
    cout<<"1.- Mostrar Lista\n2.- Insertar Elemento Al Final\n3.- Insertar Elemento Al Comienzo\n4.- Insertar Elemento en Cualquier Posicion\n5.- Eliminar Elemento Final\n6.- Eliminar Elemento Inicial\n7.- Eliminar Elemento de Cualquier Posicion\n8.- Ordenar Lista Ascendente\n9.- Ordenar Lista Descendente\n10.- Salir"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;
    int valor;
    switch(opcion){
      case 1:
        ListaEnlazada1.mostrarLista();
        break;
      case 2: //ejercicio01
        cout<<" Ingrese el valor del nuevo elemento -> ";
        cin>>valor;
        ListaEnlazada1.insertarNodoAlFinal(valor);
        break;
      case 3: //ejercicio02
        cout<<" Ingrese el valor del nuevo elemento -> ";
        cin>>valor;
        ListaEnlazada1.insertarNodoAlComienzo(valor);
        break;
      case 4: //ejercicio03
        cout<<" Ingrese el valor del nuevo elemento -> ";
        cin>>valor;
        ListaEnlazada1.insertarNodoCualquierPos(valor);
        break;
      case 5: //ejercicio04
        ListaEnlazada1.eliminarNodoFinal();
        break;
      case 6: //ejercicio05
        ListaEnlazada1.eliminarNodoInicial();
        break;
      case 7: //ejercicio06
        ListaEnlazada1.eliminarNodoCualquierPos();
        break;
      case 8: //ejercicio07
        ListaEnlazada1.ordenarListaAscendente();
        cout<<"Lista ordenada de forma ascendente con exito"<<endl;
        break;
      case 9: //ejercicio08
        ListaEnlazada1.ordenarListaDescendente();
        cout<<"Lista ordenada de forma descendente con exito"<<endl;
        break;
      case 10:
        salir = true;
        break;
    }
  }
  return 0;
}
