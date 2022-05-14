/*
Implemente una aplicación con clases donde una clase contiene un arreglo en el
que se pueden almacenar como máximo 5 datos. Debe tener un nuevo dato para
almacenarlo, debe existir un método que verifique que el arreglo tenga espacio
disponible para guardar el dato. En caso contrario se debe mostrar un mensaje
indicando que el arreglo está lleno. Asimismo, debe tener un método para retirar
un dato del arreglo, este método debe verificar que, si haya algo para sacar
del arreglo, es decir que el arreglo no vaya a estar vacío, en cuyo caso debe
desplegar un mensaje diciendo que no hay nada para sacar de arreglo.
*/

#include <iostream>
#include "Arreglo.h"
#include "Arreglo.cpp"

using namespace std;

int main(){
  Arreglo a1;
  
  bool salir=false;
  int opcion;
  while (salir==false){
    cout<<"\n***MENU***\n1.-Mostrar arreglo\n2.-Insertar Elemento\n3.-Retirar Elemento\n4.-Salir"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;
    switch (opcion){
      case 1:
	a1.mostrarArreglo();
	break;
      case 2:
	a1.insertarElemento();
	break;
      case 3:
	a1.retirarElemento();
	break;
      case 4:
	salir=true;
	break;
    }
  }

  return 0;
}
