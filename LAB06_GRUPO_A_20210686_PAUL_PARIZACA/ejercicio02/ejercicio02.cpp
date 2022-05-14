/*
Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases
debe imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.
*/

#include <iostream>
#include "Alumno.h"
#include "Alumno.cpp"

using namespace std;

int main(){
  Alumno A1(20211234,"Paul Parizaca Mozo",10,12,16);
  Alumno A2(20204321,"Alexander Lora Apaza ",11,10,7);
  A1.CalcularPromedio();
  A2.CalcularPromedio();

  cout<<"\nPrimer Alumno\n"<<endl;
  A1.imprimir();

  cout<<"\nSegundo Alumno\n"<<endl;
  A2.imprimir();

  return 0;
}
