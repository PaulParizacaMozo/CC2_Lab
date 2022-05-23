#include "Material.h"
#include <iostream>
using namespace std;

Material::Material(){
  this->material = "";
}

Material::~Material(){
};

void Material::setMaterial(string material){
  this->material = material;
}

void Material::mostrarMaterial(){
  cout<<material;
}
