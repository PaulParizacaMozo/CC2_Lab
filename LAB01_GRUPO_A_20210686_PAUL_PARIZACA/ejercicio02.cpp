#include <iostream>
using namespace std;

int main (){
  string nombre,apellidoP,apellidoM,correo;
  string dominio="@unsa.edu.pe";
  cout<<"Ingrese el primer nombre -> ";
  getline(cin,nombre);
  cout<<"Ingrese el apellido paterno  -> ";
  getline(cin,apellidoP);
  cout<<"Ingrese el apellido materno -> ";
  getline(cin,apellidoM);
  
  correo=nombre[0]+apellidoP+apellidoM[0];
  cout<<endl<<"Su correo es el siguiente -> "<<correo<<dominio<<endl;
  return 0;
}
