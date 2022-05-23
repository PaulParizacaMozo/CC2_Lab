#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"

class Alumno : public Persona{
  private:
    int cui;
  public:
    Alumno();
    Alumno(int,string,int);
    ~Alumno();
    void setCui(int);
    void mostrarAlumno();
};

#endif
