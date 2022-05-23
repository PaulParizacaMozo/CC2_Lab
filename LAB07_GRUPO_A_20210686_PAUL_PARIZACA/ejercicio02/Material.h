#ifndef MATERIAL_H
#define MATERIAL_H
#include <iostream>
using namespace std;

class Material{
  private:
    string material;
  public:
    Material();
    ~Material();
    void setMaterial(string);
    void mostrarMaterial();
};

#endif
