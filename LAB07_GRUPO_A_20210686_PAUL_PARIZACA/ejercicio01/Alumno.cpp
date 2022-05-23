#include "Alumno.h"
#include <iostream>
using namespace std;

Alumno::Alumno():Persona(){
  this->cui = 0;
}

Alumno::Alumno(int edad, string nombre, int cui):Persona(edad,nombre){
  this->cui = cui;
}

Alumno::~Alumno(){
}

void Alumno::setCui(int cui){
  this->cui = cui;
}

void Alumno::mostrarAlumno(){
  mostrarPersona();
  cout<<"CUI -> "<<cui<<endl;
}
