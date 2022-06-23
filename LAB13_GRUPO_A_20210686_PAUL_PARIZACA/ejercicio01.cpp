/*
1. Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.
*/

#include <iostream>
using namespace std;

struct fecha{
  int dia;
  int mes;
};

struct compañero{
  string nombre;
  fecha cumpleaños;
};
typedef compañero Compañero;

void mostrarCompanhero(Compañero);
void mostrarCumpleanheros(Compañero*, int, int);

int main(){
  int mes;
  cout<<"Ingrese el mes actual -> ";
  cin>>mes;
  int cantidad;
  cout<<"Ingrese la cantidad de alumnos -> ";
  cin>>cantidad;
  
  Compañero* Arreglo = new Compañero[cantidad];
  for(int i=0; i<cantidad; i++){
    cin.ignore();
    cout<<"\nIngrese la informacion del alumno "<<i+1<<endl;
    cout<<" Ingrese el Nombre -> ";
    getline(cin,Arreglo[i].nombre);
    cout<<" Ingrese el dia de su cumpleaños -> ";
    cin>>Arreglo[i].cumpleaños.dia;
    cout<<" Ingrese el mes de su cumpleaños -> ";
    cin>>Arreglo[i].cumpleaños.mes;
  }
  mostrarCumpleanheros(Arreglo,mes,cantidad);

  return 0;
}

void mostrarCompanhero(Compañero elejido){
  cout<<"  Nombre -> "<<elejido.nombre<<endl;
  cout<<"  Fecha de cumpleaños -> "<<elejido.cumpleaños.dia<<"/"<<elejido.cumpleaños.mes<<endl;
}

void mostrarCumpleanheros(Compañero* Arreglo, int mes, int cantidad){
  cout<<"\nAlumnos que su cumpleños coincide con el mes actual"<<endl;
  for (int i=0; i<cantidad; i++){
    if(Arreglo[i].cumpleaños.mes == mes){
      cout<<"Compañero "<<i+1<<endl;
      mostrarCompanhero(Arreglo[i]);
    }
  }
}
