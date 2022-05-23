#include <iostream>
#include "ClaseMultimedia.h"
#include "ClaseDisco.h"

//Descomentar si solo compilara el archivo ejercicio04.cpp
//Si compilara ejercicio04.cpp, ClaseMultimedia.cpp y ClaseDisco.cpp no es necesario descomentar

//#include "ClaseMultimedia.cpp"
//#include "ClaseDisco.cpp"

using namespace std;

int main(){
  ClaseDisco disco1("Video","Desatres Naturales","estudiantes","8GB");
  cout<<"DISCO 1:"<<endl;
  disco1.imprimirDisco(); 

  ClaseDisco disco2("Imagenes","Contaminacion Ambiental", "Ciudadanos","16GB");
  cout<<"\nDISCO 2:"<<endl;
  disco2.imprimirDisco();
  return 0;
}
