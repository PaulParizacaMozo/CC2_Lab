#include "Ave.h"
#ifndef PATO_H
#define PATO_H

class Pato : public Ave{
  public:
    Pato(float,string,float);
    void volar();
    void nadar();
    ~Pato();
};

#endif
