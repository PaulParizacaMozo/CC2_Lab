#include <iostream>
#include "Color.h"
#include "Material.h"
#include "Objeto.h"

//Descomentar si solo compilara el archivo ejercicio02.cpp
//Si compilara ejercicio02.cpp, Color.cpp, Material.cpp y Objeto.cpp no es necesario descomentar

//#include "Color.cpp"
//#include "Material.cpp"
//#include "Objeto.cpp"

using namespace std;

int main(){
  Objeto o1;
  o1.setColor("rojo");
  o1.setMaterial("carton");
  o1.setObjeto("Caja");
  cout<<"Objeto 1:"<<endl;
  o1.mostrarObjeto();
  
  cout<<endl;

  Objeto o2;
  o2.setColor("marron");
  o2.setMaterial("madera");
  o2.setObjeto("Armario");
  cout<<"Objeto 2:"<<endl;
  o2.mostrarObjeto();
  return 0;
}
