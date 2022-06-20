#include "Nodo.h"
#include "Cola.h"
#include <iostream>
using namespace std;
//Descomentar si solo compilara main.cpp
//#include "Nodo.cpp"
//#include "Cola.cpp"

void Comparar(Cola &, Cola &);
void Iterar(Cola &, Cola &, int);

int main(){
  Cola Hombres;
  Cola Mujeres;
  Hombres.push(20);
  Hombres.push(15);
  Mujeres.push(13);
  Mujeres.push(18);
  Mujeres.push(23);

  int opcion;
  int cantidadIteraciones;
  cout<<"\n**MENU**"<<endl;
  cout<<"1.- Comparar\n2.- Iterar y Comparar"<<endl;
  cout<<"Ingrese una opcion -> ";
  cin>>opcion;
  switch(opcion){
    case 1:
      Comparar(Hombres,Mujeres);
      break;
    case 2:
      cout<<" Ingrese la cantidad de iteraciones antes de comparar las edades -> ";
      cin>>cantidadIteraciones;
      Iterar(Hombres,Mujeres,cantidadIteraciones);
      break;
  }
  return 0;
}

void Comparar(Cola &Hombres, Cola &Mujeres){
  cout<<"Colas:"<<endl;
  cout<<"  Hombres";Hombres.mostrarCola();
  cout<<"  Mujeres";Mujeres.mostrarCola();
  if(Hombres.primerElemento()==Mujeres.primerElemento()){
    cout<<"  Las edades son iguales"<<endl;
  }
  else{
    if(Hombres.primerElemento()>Mujeres.primerElemento()){
      cout<<"  El hombre es mayor que la mujer."<<endl;
    }
    else{
      cout<<"  La mujer es mayor que el hombre."<<endl;
    }
  }
}

void Iterar(Cola &Hombres, Cola &Mujeres, int cantidad){
  if(cantidad == 0){
    cout<<"  Luego de iterar "<<cantidad<<" estas son las ";
    Comparar(Hombres,Mujeres);
  }
  else{
    for (int i=0; i<cantidad; i++){
      Hombres.push(Hombres.primerElemento());
      Hombres.pop();
      Mujeres.push(Mujeres.primerElemento());
      Mujeres.pop();
    }
    cout<<"  Luego de iterar "<<cantidad<<" veces, estas son las ";
    Comparar(Hombres,Mujeres);
  }
}
