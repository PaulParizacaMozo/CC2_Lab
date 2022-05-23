/*
Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.
*/

#include <iostream>
#include "Persona.h"
#include "Alumno.h"

//descomentar estas dos lineas si solo compilara el archivo ejercicio01.cpp
//Si compila ejercicio01, Persona.cpp y Alumno.cpp no es necesario descomentar

//#include "Persona.cpp"
//#include "Alumno.cpp"

using namespace std;

int main(){
  Alumno a1;
  a1.setEdad(20);
  a1.setNombre("Paul Parizaca Mozo");
  a1.setCui(23456789);
  cout<<"Alumno 1:"<<endl;
  a1.mostrarAlumno();
  
  cout<<endl;
  
  Alumno a2(18,"Luiz Diaz",12345678);
  cout<<"Alumno 2:"<<endl;
  a2.mostrarAlumno();
  return 0;
}
