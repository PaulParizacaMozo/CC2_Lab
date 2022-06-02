/*
2.- Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.
*/

#include <iostream>
using namespace std;

template <typename tipo>
void operaciones(tipo n1, tipo n2){
  float div = n1/float(n2);
  cout<<"  Suma -> "<<n1+n2<<endl;
  cout<<"  Resta -> "<<n1-n2<<endl;
  cout<<"  Multiplicacion -> "<<n1*n2<<endl;
  cout<<"  Division -> "<<div<<endl;
}

int main(){
  int Nentero1;
  int Nentero2;
  float Nfloat1;
  float Nfloat2;
  bool valor=true;
  int opcion;
  while(valor==true){
    cout<<"\nMENU"<<endl;
    cout<<"1.- Operaciones de enteros\n2.- Operaciones flotantes\n3.- Salir"<<endl;
    cout<<"Ingrese la opcion -> ";
    cin>>opcion;
    switch(opcion){
      case 1: 
	cout<<" Ingrese el primer numero -> ";
	cin>>Nentero1;
      	cout<<" Ingrese el segundo numero -> ";
	cin>>Nentero2;
	operaciones<int>(Nentero1,Nentero2);
	break;
      case 2:
      	cout<<" Ingrese el primer numero -> ";
	cin>>Nfloat1;
      	cout<<" Ingrese el segundo numero -> ";
	cin>>Nfloat2;
	operaciones<float>(Nfloat1,Nfloat2);
	break;
      case 3:
	valor=false;
	break;
    }
  }
  return 0;
}
