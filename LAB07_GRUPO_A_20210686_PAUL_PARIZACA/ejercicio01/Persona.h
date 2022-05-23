#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona {
  private:
    int edad;
    string nombre;
  public:
    Persona();
    Persona(int,string);
    ~Persona();
    void setEdad(int);
    void setNombre(string);
    void mostrarPersona();
};

#endif
