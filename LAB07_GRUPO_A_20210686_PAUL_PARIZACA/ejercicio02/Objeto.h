#ifndef OBJETO_H
#define OBJETO_H
#include "Material.h"
#include "Color.h"

class Objeto : public Color,public Material{
  private:
    string objeto;
  public:
    Objeto();
    ~Objeto();
    void setObjeto(string);
    void mostrarObjeto();
};

#endif
