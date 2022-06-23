/*
4. Implemente un programa que maneje un arreglo de estructuras que solicite 
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por 
pantalla el menor y mayor sueldo.
*/

#include <iostream>
using namespace std;

struct empleado{
  string nombre;
  string sexo;
  float sueldo;
};
typedef empleado Empleado;

void LlenarInformacion(Empleado*, int);
void MostrarInformacion(Empleado*, int);
void MenorMayor(Empleado*, int);

int main(){
  int cantidad;
  cout<<"Ingrese la cantidad de empleados -> ";
  cin>>cantidad;
  Empleado* Arreglo = new Empleado[cantidad];
  LlenarInformacion(Arreglo,cantidad);
  MenorMayor(Arreglo,cantidad);
  delete [] Arreglo;

  return 0;
}

void LlenarInformacion(Empleado* Arreglo,int cantidad){
  for(int i=0; i<cantidad; i++){
    cin.ignore();
    cout<<"\nIngrese la informacion del Empleado "<<i+1<<endl;
    cout<<" Ingrese el Nombre -> ";
    getline(cin,Arreglo[i].nombre);
    cout<<" Ingrese el sexo -> ";
    cin>>Arreglo[i].sexo;
    cout<<" Ingrese el sueldo -> ";
    cin>>Arreglo[i].sueldo;
  }
}

void MostrarInformacion(Empleado Emp, int indice){
  cout<<"  Informacion del Empleado "<<indice<<endl;
  cout<<"   Nombre: "<<Emp.nombre<<endl;
  cout<<"   Sexo: "<<Emp.sexo<<endl;
  cout<<"   Sueldo: "<<Emp.sueldo<<endl;
}

void MenorMayor(Empleado* Arreglo, int cantidad){
  float menor = Arreglo[0].sueldo;
  int indiceMenor=0;
  float mayor = Arreglo[0].sueldo;
  int indiceMayor=0;
  for(int i=1; i<cantidad; i++){
    if(menor>Arreglo[i].sueldo){
      menor = Arreglo[i].sueldo;
      indiceMenor = i;
    }
    if(mayor<Arreglo[i].sueldo){
      mayor = Arreglo[i].sueldo;
      indiceMayor = i;
    }
  }
  cout<<"\nEl empleado con menor sueldo es:"<<endl;
  MostrarInformacion(Arreglo[indiceMenor], indiceMenor+1);
  cout<<"\nEl empleado con mayor sueldo es:"<<endl;
  MostrarInformacion(Arreglo[indiceMayor], indiceMayor+1);
}
