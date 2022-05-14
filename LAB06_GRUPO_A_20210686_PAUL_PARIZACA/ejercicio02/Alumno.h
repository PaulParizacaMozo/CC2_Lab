#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

class Alumno {
  private:
  int CUI;
  string nombreCompleto;
  int nota1;
  int nota2;
  int nota3;
  float promedio;
  public:
  Alumno(int,string,int,int,int);
  ~Alumno();
  void setNotas(int,int,int);
  void CalcularPromedio();
  float getPromedio();
  void imprimir();
};

#endif
