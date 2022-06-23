/*
3. Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son 
menores de 20 años y tienen una talla mayor a 1,70 mts de altura. 
*/

#include <iostream>
using namespace std;

struct jugador{
  string nombre;
  int edad;
  float talla;
};
typedef jugador Jugador;

void LlenarInformacion(Jugador*, int);
void MostrarInformacion(Jugador*, int);
void Menor20Mas170(Jugador*, int);

int main(){
  const int cantidad = 10;
  Jugador* Arreglo = new Jugador[cantidad];
  LlenarInformacion(Arreglo,cantidad);
  Menor20Mas170(Arreglo,cantidad);
  delete [] Arreglo;

  return 0;
}

void LlenarInformacion(Jugador* Arreglo,int cantidad){
  for(int i=0; i<cantidad; i++){
    cout<<"\nIngrese la informacion del jugador "<<i+1<<endl;
    cout<<" Ingrese el Nombre -> ";
    getline(cin,Arreglo[i].nombre);
    cout<<" Ingrese la edad -> ";
    cin>>Arreglo[i].edad;
    cout<<" Ingrese la talla -> ";
    cin>>Arreglo[i].talla;
    cin.ignore();
  }
}

void MostrarInformacion(Jugador Jug, int indice){
  cout<<"\nInformacion del jugador "<<indice<<endl;
  cout<<"  Nombre: "<<Jug.nombre<<endl;
  cout<<"  Edad: "<<Jug.edad<<endl;
  cout<<"  Talla: "<<Jug.talla<<endl;
}

void Menor20Mas170(Jugador* Arreglo, int cantidad){
  for(int i=0; i<cantidad; i++){
    if((Arreglo[i].edad<20) && (Arreglo[i].talla>1.70)){
      MostrarInformacion(Arreglo[i],i+1);
    }
  }
}
