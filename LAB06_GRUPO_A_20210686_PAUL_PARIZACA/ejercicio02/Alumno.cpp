#include <iostream>
#include "Alumno.h"

Alumno::Alumno(int CUI, string nombre, int nota1, int nota2, int nota3){
  this->CUI = CUI;
  this->nombreCompleto = nombre;
  this->nota1 = nota1;
  this->nota2 = nota2;
  this->nota3 = nota3;
}

Alumno::~Alumno(){
}

void Alumno::setNotas(int nota1, int nota2, int nota3){
  this->nota1 = nota1;
  this->nota2 = nota2;
  this->nota3 = nota3;
}

void Alumno::CalcularPromedio(){
  promedio = (nota1 + nota2 + nota3)/3.0;
}

float Alumno::getPromedio(){
  return promedio;
}

void Alumno::imprimir(){
  int contador=0;
  string nombre;
  while(true){
    if(nombreCompleto[contador]==' '){
      break;
    } 
    nombre+=nombreCompleto[contador];
    contador++;
  }
  cout<<" Primer Nombre -> "<<nombre<<endl;
  cout<<" CUI -> "<<CUI<<endl;
  cout<<" Promedio -> "<<promedio<<endl;
  if(promedio >= 10.5){
    cout<<" El alumno aprobó el curso de Ciencia de la Computación"<<endl;
  }
  else{
    cout<<" El alumno desaprobó el curso de Ciencia de la Computación"<<endl;
  }
}

