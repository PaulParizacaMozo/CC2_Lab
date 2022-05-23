#include "Ave.h"
#ifndef GALLINA_H
#define GALLINA_H

class Gallina : public Ave{
  public:
    Gallina(float,string,float);
    void ponerHuevo();
    void Aletear();
    ~Gallina();
};

#endif
