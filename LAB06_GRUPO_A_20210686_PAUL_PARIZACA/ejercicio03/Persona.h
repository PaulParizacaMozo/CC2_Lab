#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre;
    int edad;
    string fechaNacimiento;
    string fechaActual;
  public:
    Persona();
    Persona(string, string, string);
    ~Persona();
    void setNombre(string);
    void setFechaNacimiento(string);
    void setFechaActual(string);
    void CalcularEdad();
    void ImprimirInfo();
};

#endif
