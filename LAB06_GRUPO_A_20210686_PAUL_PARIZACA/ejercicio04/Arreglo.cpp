#include <iostream>
#include "Arreglo.h"

using namespace std;

Arreglo::Arreglo(){
  for (int i=0; i<5; i++){
    arreglo[i]=0;
  }
}

Arreglo::~Arreglo(){
}

bool Arreglo::arregloLleno(){
  int contador=0;
  for(int i=0; i<5; i++){
    if (arreglo[i]!=0){
      contador++;
    } 
  }
  if(contador==5){
    return true;
  }
  else{
   return false;
  }
}

bool Arreglo::arregloVacio(){
  int contador=0;
  for(int i=0; i<5; i++){
    if (arreglo[i]==0){
      contador++;
    } 
  }
  if(contador==5){
    return true;
  }
  else{
   return false;
  }
}

void Arreglo::mostrarArreglo(){
  cout<<"\n Arreglo -> ";
  for (int i=0;i<5;i++){
    if(i==4){
      if (arreglo[i]==0){
        cout<<" ";
      }
      else{
        cout<<arreglo[i]<<" ";
      }
    }
    else{
      if (arreglo[i]==0){
        cout<<" "<<" - ";
      }
      else{
        cout<<arreglo[i]<<" - ";
      }
    }
  }
  cout<<endl;
}

void Arreglo::insertarElemento(){
  if(arregloLleno()==false){
    int contador=0;
    int nuevoDato;
    cout<<"\n Ingrese el valor del nuevo dato -> ";
    cin>>nuevoDato;
    while (true){
      if (arreglo[contador]==0){
        arreglo[contador]=nuevoDato;
        break;
      }
      contador++;
    }
  }
  else{
    cout<<"\n El arreglo esta lleno. Porfavor elimine un elemento."<<endl;
  }
}

void Arreglo::retirarElemento(){
  if(arregloVacio()==false){
    mostrarArreglo();
    int indice;
    cout<<"\n Indique la posicion del elemento que desea retirar -> ";
    cin>>indice;
    arreglo[indice-1]=0;
  }
  else{
    cout<<"\n El arreglo ya esta vacio no hay nada por retirar."<<endl;
  }
}
