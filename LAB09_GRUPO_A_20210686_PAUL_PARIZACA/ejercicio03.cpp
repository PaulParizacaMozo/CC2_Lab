/*
3.- Se pide escribir una función utilizando plantillas que tome dos valores 
genéricos de tipo char y string (5 veces); char corresponde a una letra y 
string corresponde al apellido. El programa debe mostrar por pantalla el 
siguiente formato de correo electrónico: char/string@unsa.edu.pe.
*/

#include <iostream>
using namespace std;

template <typename tipo1, typename tipo2>
tipo2 crearCorreo(tipo1 letra, tipo2 apellido){
  string correo;
  string complemento = "@unsa.edu.pe";
  correo = letra + apellido + complemento; 
  return correo;
}

int main(){
  char letraNombre;
  string apellido;
  for (int i=0; i<5; i++){
    cout<<"\nCorreo "<<i+1<<endl;
    cout<<" Ingrese la primera letra del nombre -> ";
    cin>>letraNombre;
    cout<<" Ingrese el apellido -> ";
    cin>>apellido;
    cout<<"  Correo -> "<<crearCorreo<char,string>(letraNombre,apellido)<<endl;
  }
  return 0;
}
