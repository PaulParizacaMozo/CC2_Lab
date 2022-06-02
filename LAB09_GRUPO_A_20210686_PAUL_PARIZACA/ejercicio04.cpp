/*
4.- Implemente un programa que haga uso de plantillas para determinar el minimo 
y maximo valor de un arreglo de elementos dado. Debe de existir dos funciones, 
la primera que retorne el mayor de valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se debe hacer pruebas de estas 
funciones, con arreglos de enteros y flotantes.
*/

#include <iostream>
using namespace std;

template <typename tipo>
tipo VMinimo(tipo *arreglo, int tam){
  tipo minimo = arreglo[0];
  for (int i=1; i<tam; i++){
    if (arreglo[i] < minimo){
      minimo = arreglo[i];
    }
  }
  return minimo;
}

template <typename tipo>
tipo VMaximo(tipo *arreglo,int tam){
  tipo maximo = arreglo[0];
  for (int i=1; i<tam; i++){
    if (arreglo[i] > maximo){
      maximo = arreglo[i];
    }
  }
  return maximo;
}

template <typename tipo>
void mostrarArreglo(tipo *arreglo,int tam){
  for (int i=0; i<tam; i++){
    if (i<tam-1){
      cout<<arreglo[i]<<" - "; 
    }
    else{
      cout<<arreglo[i]<<"  "; 
    }
  }
}

template <typename tipo>
void llenarArreglo(tipo *arreglo,int tam){
  for (int i=0; i<tam; i++){
    cout<<"   Ingrese el elemento "<<i+1<<" -> ";
    cin>>arreglo[i]; 
  }
}

int main(){
  int tam;
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
	cin>>tam;
	int *ArrEnteros= new int[tam];
	llenarArreglo(ArrEnteros,tam);
        cout<<" \nArreglo -> ";
	mostrarArreglo<int>(ArrEnteros,tam);
	cout<<"\n  El valor minimo -> "<<VMinimo<int>(ArrEnteros,tam)<<endl;
	cout<<"  El valor maximo -> "<<VMaximo<int>(ArrEnteros,tam)<<endl;
	delete [] ArrEnteros;
	break;
     }
      case 2:{
      	cout<<" Ingrese el tamaño del arreglo -> ";
	cin>>tam;
	float *ArrFloat = new float[tam];
	llenarArreglo(ArrFloat,tam);
	cout<<" \nArreglo -> ";
        mostrarArreglo<float>(ArrFloat,tam);
	cout<<"\n  El valor minimo -> "<<VMinimo<float>(ArrFloat,tam)<<endl;
	cout<<"  El valor maximo -> "<<VMaximo<float>(ArrFloat,tam)<<endl;
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
