#include "Color.h"
#include <iostream>
using namespace std;

Color::Color(){
  this->color = "";
}

Color::~Color(){
}

void Color::setColor(string color){
  this->color = color;
}

void Color::mostrarColor(){
  cout<<color;
}
