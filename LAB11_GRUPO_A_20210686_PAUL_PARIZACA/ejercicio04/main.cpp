#include "Nodo.h"
#include "Pila.h"
#include <iostream>
#include <math.h>
//Si compilara los archivos main.cpp, Nodo.cpp y Pila.cpp no es necesario descomentar
//Descomentar si solo compilara el archivo main.cpp.
//#include "Nodo.cpp"
//#include "Pila.cpp"
using namespace std;

//Variable gloabl para contar los movimientos
int contador=0;
int CantidadMovimientos;

//Prototipos de las funciones
void llenarOrigen(int, Pila &);
void hanoi(int, Pila &, Pila &, Pila &);
void mostrarPilas(Pila &, Pila & , Pila &);

//MAIN
int main(){
  Pila Origen("Origen");
  Pila Auxiliar("Auxiliar");
  Pila Destino("Destino");
  int discos=1;
  cout<<"Ingrese la cantidad de discos -> ";
  cin>>discos;
  CantidadMovimientos = (pow(2,discos)-1);
  cout<<" Movimientos Minimos para Resolver el ejercicio -> "<<CantidadMovimientos<<" movimientos\n"<<endl;
  llenarOrigen(discos, Origen);
  mostrarPilas(Origen,Destino,Auxiliar);
  hanoi(discos, Origen, Destino, Auxiliar);

  return 0;
}

//Funcion llenarOrigen
void llenarOrigen(int discos, Pila &Origen){
  for (int i=discos; i>0; i--){
    Origen.push(i);
  }
}

//Funcion para Mostrar las PILAS
void mostrarPilas(Pila &Origen, Pila &Final, Pila &Auxiliar){
  Pila Arr[3]={Origen,Final,Auxiliar}; 
  Arr[0]=Origen;
  Arr[1]=Final;
  Arr[2]=Auxiliar;
  if(contador == 0){
    cout<<"POSICION INICIAL de las PILAS:"<<endl;
    contador++;
  }
  else{
    if(contador<CantidadMovimientos){
      cout<<"Movimiento "<<contador<<":"<<endl;
      contador++;
    }
    else{
      cout<<"Movimiento "<<contador<<" (Ultimo Movimiento):"<<endl;
      contador++;
    }
  }
  for(int i=0; i<3; i++){
    string aux = Arr[i].getNombre();
    if(aux=="Origen"){
      Arr[i].mostrarPila();
    }
  }
  for(int i=0; i<3; i++){
    string aux = Arr[i].getNombre();
    if(aux=="Auxiliar"){
      Arr[i].mostrarPila();
    }
  } 
  for(int i=0; i<3; i++){
    string aux = Arr[i].getNombre();
    if(aux=="Destino"){
      Arr[i].mostrarPila();
    }
  }
  cout<<endl;
}

//Funcion RECURSIVA Hanoi
void hanoi(int discos, Pila &Origen, Pila &Final, Pila &Auxiliar){
  if (discos == 1){
    int aux = Origen.top();
    Origen.pop();
    Final.push(aux);
    mostrarPilas(Origen,Final,Auxiliar);
  }
  else{
    hanoi(discos-1, Origen, Auxiliar, Final);
    int aux = Origen.top();
    Origen.pop();
    Final.push(aux);
    mostrarPilas(Origen,Final,Auxiliar);
    hanoi(discos-1,Auxiliar, Final, Origen);
  }
}
