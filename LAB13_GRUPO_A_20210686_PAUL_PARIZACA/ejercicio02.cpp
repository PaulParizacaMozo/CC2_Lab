/*
2. Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.
*/

#include <iostream>
using namespace std;

struct alumno{
  string nombre;
  string grupo;
  float fase1;
  float fase2;
  float fase3;
  float proyectoFinal;
  float notaFinal;
};
typedef alumno Alumno;

void LlenarInformacion(Alumno*,int);
void MostrarInformacion(Alumno*,int);

int main(){
  int cantidad;
  cout<<"Ingrese la cantidad de Alumnos -> ";
  cin>>cantidad;
  
  Alumno* Arreglo = new Alumno[cantidad];
  LlenarInformacion(Arreglo,cantidad);
  MostrarInformacion(Arreglo,cantidad);
  delete [] Arreglo;

  return 0;
}

void LlenarInformacion(Alumno* Arreglo,int cantidad){
  for(int i=0; i<cantidad; i++){
    cin.ignore();
    cout<<"\nIngrese la informacion del alumno "<<i+1<<endl;
    cout<<" Ingrese el Nombre -> ";
    getline(cin,Arreglo[i].nombre);
    cout<<" Ingrese el grupo -> ";
    getline(cin,Arreglo[i].grupo);
    cout<<" Ingrese la nota de la primera fase -> ";
    cin>>Arreglo[i].fase1;
    cout<<" Ingrese la nota de la segunda fase -> ";
    cin>>Arreglo[i].fase2;
    cout<<" Ingrese la nota de la tercera fase -> ";
    cin>>Arreglo[i].fase3;
    cout<<" Ingrese la nota del proyecto final -> ";
    cin>>Arreglo[i].proyectoFinal;
    Arreglo[i].notaFinal = (Arreglo[i].fase1*0.15)+(Arreglo[i].fase2*0.20)+(Arreglo[i].fase3*0.25)+(Arreglo[i].proyectoFinal*0.40);
  }
}

void MostrarInformacion(Alumno* Arreglo,int cantidad){
  cout<<"\nInformacion de los alumnos"<<endl;
  for(int i=0; i<cantidad; i++){
    cout<<"\n Alumno "<<i+1<<endl;
    cout<<"  ->Nombre: "<<Arreglo[i].nombre<<endl;
    cout<<"  ->Grupo: "<<Arreglo[i].grupo<<endl;
    cout<<"  ->NOTAS:"<<endl;
    cout<<"     Fase 1: "<<Arreglo[i].fase1<<endl;
    cout<<"     Fase 2: "<<Arreglo[i].fase2<<endl;
    cout<<"     Fase 3: "<<Arreglo[i].fase3<<endl;
    cout<<"     Proyecto Final: "<<Arreglo[i].proyectoFinal<<endl;
    cout<<"  ->Nota Final: "<<Arreglo[i].notaFinal<<endl;
  }
}
