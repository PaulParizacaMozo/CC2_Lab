#include <iostream>
using namespace std;

int sumar(int n1, int n2){
  return n1+n2;
}

int restar(int n1, int n2){
  return n1-n2;
}

int multiplicar(int n1, int n2){
  return n1*n2;
}

int dividir(int n1, int n2){
  return n1/n2;
}

int resultado(int(*operacion)(int,int), int n1, int n2){
  return (*operacion)(n1,n2);
}

int main(){
    int opcion, n1, n2;
    bool valor=true;
    int respuesta;
    cout<<"Ingrese el valor de n1 -> ";
    cin>>n1;
    cout<<"Ingrese el valor de n2 -> ";
    cin>>n2;
    while(valor==true){
      cout<<"Seleccione la opcion que desea:\n1.-Sumar\n2.-Restar\n3.-Multiplicar\n4.-Dividir\n5.-Salir"<<endl;
      cout<<"Ingrese la opcion que desea ejecutar -> ";
      cin>>opcion;
      switch (opcion){
	case 1:
	  respuesta=resultado(sumar,n1,n2);
	  cout<<"El resultado de la suma es -> "<<respuesta<<endl<<endl;
	  break;
	case 2:
	  respuesta=resultado(restar,n1,n2);
	  cout<<"El resultado de la resta es -> "<<respuesta<<endl<<endl;
	  break;
	case 3:
	  respuesta=resultado(multiplicar,n1,n2);
	  cout<<"El resultado de la multiplicacion es -> "<<respuesta<<endl<<endl;
	  break;
	case 4:
	  respuesta=resultado(dividir,n1,n2);
	  cout<<"El resultado de la division es -> "<<respuesta<<endl<<endl;
	  break;	
	case 5:
	  valor=false;
	  break;
      }
    } 
    return 0;
}

