#include "ClaseMultimedia.h"
#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include <iostream>
using namespace std;

class ClaseDisco : public ClaseMultimedia{
  private:
    string capacidad;
  public:
    ClaseDisco(string,string,string,string);
    void imprimirDisco();
    ~ClaseDisco();
};

#endif
