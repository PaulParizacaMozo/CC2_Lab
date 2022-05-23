#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H
#include <iostream>
using namespace std;

class ClaseMultimedia{
  private:
    string formato;
    string contenido;
    string receptor;
  public:
    ClaseMultimedia(string,string,string);
    void imprimirMultimedia();
    ~ClaseMultimedia();
};

#endif
