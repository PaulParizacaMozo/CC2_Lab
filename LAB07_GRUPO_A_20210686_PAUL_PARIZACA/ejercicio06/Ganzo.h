#include "Ave.h"
#ifndef GANZO_H
#define GANZO_H

class Ganzo : public Ave{
  public:
    Ganzo(float,string,float);
    void volar();
    void nadar();
    ~Ganzo();
};

#endif
