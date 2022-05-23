#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color{
  private:
    string color;
  public:
    Color();
    ~Color();
    void setColor(string);
    void mostrarColor();
};

#endif
