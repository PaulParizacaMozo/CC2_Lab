/*
1.- Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. 
La función debe ser capaz de dar este tipo de resultados.
*/

#include <iostream>
using namespace std;

template <typename tipo>
tipo ValorMinimo(tipo n1, tipo n2, tipo n3){
  tipo minimo;
  if ( n1 <= n2 && n1 <= n3 ){
    minimo = n1;
  }
  else{
    if( n2 <= n3 ){
      minimo = n2;
    }
    else{
      minimo = n3;
    }
  }
  return minimo;
}

template <typename tipo>
tipo ValorMaximo(tipo n1, tipo n2, tipo n3){
  tipo maximo;
  if ( n1 >= n2 && n1 >= n3 ){
    maximo = n1;
  }
  else{
    if( n2 >= n3 ){
      maximo = n2;
    }
    else{
      maximo = n3;
    }
  }
  return maximo;
}

int main(){
  int nentero1,nentero2,nentero3;
  float nfloat1,nfloat2,nfloat3;
  bool valor=true;
  int opcion;
  while(valor==true){
    cout<<"\nMENU"<<endl;
    cout<<"1.- Comparar enteros\n2.- Comparar flotantes\n3.- Salir"<<endl;
    cout<<"Ingrese la opcion -> ";
    cin>>opcion;
    switch(opcion){
      case 1: 
	cout<<" Ingrese el primer numero -> ";
	cin>>nentero1;
      	cout<<" Ingrese el segundo numero -> ";
	cin>>nentero2;
	cout<<" Ingrese el tercer numero -> ";
	cin>>nentero3;
	cout<<"  El valor minimo es -> "<<ValorMinimo<int>(nentero1,nentero2,nentero3)<<endl;
	cout<<"  El valor maximo es -> "<<ValorMaximo<int>(nentero1,nentero2,nentero3)<<endl;
	break;
      case 2:
      	cout<<" Ingrese el primer numero -> ";
	cin>>nfloat1;
      	cout<<" Ingrese el segundo numero -> ";
	cin>>nfloat2;
	cout<<" Ingrese el tercer numero -> ";
	cin>>nfloat3;
	cout<<"  El valor minimo es -> "<<ValorMinimo<float>(nfloat1,nfloat2,nfloat3)<<endl;
	cout<<"  El valor maximo es -> "<<ValorMaximo<float>(nfloat1,nfloat2,nfloat3)<<endl;
	break;
      case 3:
	valor=false;
	break;
    }
  }
  return 0;
}
