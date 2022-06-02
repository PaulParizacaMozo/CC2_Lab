/*
5.- Realizar la implementación de un programa que haga uso de plantillas, para 
elaborar una función que permita ordenar ascendentemente y descendentemente los
elementos de un arreglo de valores enteros y otro arreglo de valores flotantes.
Las funciones deben de recibir como parámetros, un puntero al tipo de elemento
dado, y dos enteros que indican los índices del primero y último elemento.
*/

#include <iostream>
using namespace std;

template <typename tipo>
void mostrarArreglo(tipo *arreglo,int Pindice,int UIndice){
  int tam=UIndice+1;
  for (int i=0; i<tam; i++){
    if(i<tam-1){
      cout<<arreglo[i]<<" - ";
    }
    else{
      cout<<arreglo[i]<<" ";
    }
  }
  cout<<endl;
}

template <typename tipo>
void llenarArreglo(tipo *arreglo,int Pindice,int UIndice){
  int tam=UIndice+1;
  for (int i=0; i<tam; i++){
    cout<<"   Ingrese el elemento "<<i+1<<" -> ";
    cin>>arreglo[i]; 
  }
}

template <typename tipo>
void ordenAscendente(tipo *arreglo,int Pindice,int UIndice){
  int tam=UIndice+1;
  for (int i=1; i<tam; i++){
    int j=i;
    while (j>0 && arreglo[j-1]>arreglo[j]) {
      tipo auxiliar = arreglo[j];
      arreglo[j] = arreglo[j-1];
      arreglo[j-1] = auxiliar;
      j--;
    }
  }
}

template <typename tipo>
void ordenDescendente(tipo *arreglo,int Pindice,int UIndice){
  int tam=UIndice+1;
  for (int i=1; i<tam; i++){
    int j=i;
    while (j>0 && arreglo[j-1]<arreglo[j]) {
      tipo auxiliar = arreglo[j];
      arreglo[j] = arreglo[j-1];
      arreglo[j-1] = auxiliar;
      j--;
    }
  }
}

int main(){
  int PrimerIndice=0;
  int UltimoIndice;
  bool valor=true;
  int opcion;
  while(valor==true){
    cout<<"\nMENU"<<endl;
    cout<<"1.- Arreglo de enteros\n2.- Arreglo de flotantes\n3.- Salir"<<endl;
    cout<<"Ingrese la opcion -> ";
    cin>>opcion;
    switch(opcion){
      case 1:{
	cout<<" Ingrese el tamaño del arreglo -> ";
	cin>>UltimoIndice;
	UltimoIndice--;
	int *ArrEnteros= new int[UltimoIndice+1];
	llenarArreglo(ArrEnteros,PrimerIndice,UltimoIndice);
	cout<<" \nArreglo original\n -> ";
	mostrarArreglo<int>(ArrEnteros,PrimerIndice,UltimoIndice);
  	cout<<" Arreglo en orden ascendente\n -> ";
  	ordenAscendente<int>(ArrEnteros,PrimerIndice,UltimoIndice);
  	mostrarArreglo<int>(ArrEnteros,PrimerIndice,UltimoIndice);
  	cout<<" Arreglo en orden descendente\n -> ";
  	ordenDescendente<int>(ArrEnteros,PrimerIndice,UltimoIndice);
  	mostrarArreglo<int>(ArrEnteros,PrimerIndice,UltimoIndice);
	delete [] ArrEnteros;
	break;
     }
      case 2:{
      	cout<<" Ingrese el tamaño del arreglo -> ";
	cin>>UltimoIndice;
	UltimoIndice--;
	float *ArrFloat = new float[UltimoIndice+1];
	llenarArreglo(ArrFloat,PrimerIndice,UltimoIndice);
	cout<<" \nArreglo original\n -> ";
  	mostrarArreglo<float>(ArrFloat,PrimerIndice,UltimoIndice);
  	cout<<" Arreglo en orden ascendente\n -> ";
  	ordenAscendente<float>(ArrFloat,PrimerIndice,UltimoIndice);
  	mostrarArreglo<float>(ArrFloat,PrimerIndice,UltimoIndice);
  	cout<<" Arreglo en orden descendente\n -> ";
  	ordenDescendente<float>(ArrFloat,PrimerIndice,UltimoIndice);
  	mostrarArreglo<float>(ArrFloat,PrimerIndice,UltimoIndice);
	delete [] ArrFloat;
	break;
     }
      case 3:
	valor=false;
	break;
    }
  }

  return 0;
}
