#include <iostream>
#include "Ave.h"
#include "Ganzo.h"
#include "Pato.h"
#include "Gallina.h"

//Descomentar si solo compilara el archivo ejercicio06.cpp
//Si compilara ejercicio06.cpp, Ave.cpp, Ganzo.cpp, Pato.cpp y Gallina.cpp no es necesario descomentar

//#include "Ave.cpp"
//#include "Ganzo.cpp"
//#include "Pato.cpp"
//#include "Gallina.cpp"

int main(){
  Ganzo g1(0.50,"Blanco",12);
  g1.comer();
  g1.nadar();
  g1.volar();
  g1.dormir();
  cout<<"Ganzo:"<<endl;
  g1.informacion();

  Pato p1(0.40,"Blanco y Negro",8);
  p1.comer();
  p1.nadar();
  p1.volar();
  p1.dormir();
  cout<<"\nPato:"<<endl;
  p1.informacion();

  Gallina ga1(0.30,"Amarillo",3);
  ga1.comer();
  ga1.ponerHuevo();
  ga1.Aletear();
  ga1.dormir();
  cout<<"\nGallina:"<<endl;
  ga1.informacion();

  return 0;
}
