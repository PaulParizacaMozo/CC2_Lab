#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(){
  this->nombre = "";
  this->fechaNacimiento = "";
  this->fechaActual = "";
}

Persona::Persona(string nombre, string fechaNacimiento, string fechaActual){
  this->nombre = nombre;
  this->fechaNacimiento = fechaNacimiento;
  this->fechaActual = fechaActual;
}

Persona::~Persona(){
}

void Persona::setNombre(string nombre){
  this->nombre = nombre;
}

void Persona::setFechaNacimiento(string fechaNacimiento){
  this->fechaNacimiento = fechaNacimiento;
}

void Persona::setFechaActual(string fechaActual){
  this->fechaActual = fechaActual;
}

void Persona::CalcularEdad(){
  string actual="", nacimiento="";
  int enteroActual,enteroNacimiento;
  for (int i=6; i<10;i++){
    actual+=fechaActual[i];
  }
  for (int i=6; i<10;i++){
    nacimiento+=fechaNacimiento[i];
  }
  enteroActual = stoi(actual);
  enteroNacimiento = stoi(nacimiento);
  actual="";
  nacimiento="";

  this->edad = enteroActual - enteroNacimiento;

  for (int i=3; i<5;i++){
    actual+=fechaActual[i];
  }
  for (int i=3; i<5;i++){
    nacimiento+=fechaNacimiento[i];
  }
  enteroActual = stoi(actual);
  enteroNacimiento = stoi(nacimiento);
  if (enteroNacimiento > enteroActual){
    this->edad--;
  }
}

void Persona::ImprimirInfo(){
  cout<<" Nombre -> "<<nombre<<endl;
  cout<<" Edad -> "<<edad<<endl;
}
