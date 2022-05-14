/*
Implemente un programa con clases que lea la fecha de nacimiento y la fecha de
hoy y muestre por pantalla el nombre y la edad de la persona.
*/

#include <iostream>
#include "Persona.h"
#include "Persona.cpp"

using namespace std;

int main(){
  Persona P1("Paul Parizaca","10-12-2002","12-05-2022");
  P1.CalcularEdad();
  cout<<"\nPersona 1\n"<<endl;
  P1.ImprimirInfo();

  Persona P2;
  P2.setNombre("Juan Perez");
  P2.setFechaActual("12-05-2022");
  P2.setFechaNacimiento("20-08-2012");
  P2.CalcularEdad();
  cout<<"\nPersona 2\n"<<endl;
  P2.ImprimirInfo();

  return 0;
}
