#include <iostream>
using namespace std;

int main(){
  const int filas = 3;
  const int columnas = 4;
  string datos[filas][columnas];

  //LLenado de datos
  for (int i=0; i<filas; i++){
    cout<<"Ingrese los datos de la persona "<<i+1<<":"<<endl;
    cout<<"  Ingrese el nombre (solo nombres) -> ";
    getline(cin,datos[i][0]);
    cout<<"  Ingrese el apellidos -> ";
    getline(cin,datos[i][1]);
    cout<<"  Ingrese la edad -> ";
    getline(cin,datos[i][2]);
    cout<<"  Ingrese el DNI -> ";
    getline(cin,datos[i][3]);
  }
  
  //Imprime los datos
  cout<<"\nDATOS DE LAS 3 PERSONAS\n"<<endl;
  for (int i=0; i<filas; i++){
    cout<<"Datos de la persona "<<i+1<<":"<<endl;
    cout<<"  Nombre -> "<<datos[i][0]<<endl;
    cout<<"  Apellidos -> "<<datos[i][1]<<endl;
    cout<<"  Edad -> "<<datos[i][2]<<endl;
    cout<<"  DNI -> "<<datos[i][3]<<endl;
  }

  return 0;
}

