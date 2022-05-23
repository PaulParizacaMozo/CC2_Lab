#include "OperacionBase.h"
#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H

class OperacionFactorial : public OperacionBase {
  public:
    OperacionFactorial();
    OperacionFactorial(int);
    int devolverFactorial();
    ~OperacionFactorial();
};

#endif
