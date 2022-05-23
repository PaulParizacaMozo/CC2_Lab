#include "ClaseMultimedia.h"
#include <iostream>
using namespace std;

ClaseMultimedia::ClaseMultimedia(string formato, string contenido, string receptor){
  this->formato = formato;
  this->contenido = contenido;
  this->receptor = receptor;
}

ClaseMultimedia::~ClaseMultimedia(){
}

void ClaseMultimedia::imprimirMultimedia(){
  cout<<"INFORMACION DEL MEDIO MULTIMEDIA"<<endl;
  cout<<" Formato -> "<<formato<<endl;
  cout<<" Contenido -> "<<contenido<<endl;
  cout<<" Receptor -> "<<receptor<<endl;
}
