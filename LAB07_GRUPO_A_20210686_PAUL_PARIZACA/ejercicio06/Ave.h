#ifndef AVE_H
#define AVE_H
#include <iostream>
using namespace std;

class Ave{
  private:
    float altura;
    string color;
    float peso;
  public:
    Ave(float,string,float);
    void comer();
    void informacion();
    void dormir();
    ~Ave();
};

#endif

