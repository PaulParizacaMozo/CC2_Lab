#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(){
  this->edad = 0;
  this->nombre = "";
}

Persona::Persona(int edad, string nombre){
  this->edad = edad;
  this->nombre = nombre;
}

Persona::~Persona(){
}

void Persona::setEdad(int edad){
  this->edad = edad;
}

void Persona::setNombre(string nombre){
  this->nombre = nombre;
}

void Persona::mostrarPersona(){
  cout<<"Nombre -> "<<nombre<<endl;
  cout<<"Edad -> "<<edad<<endl;
}


