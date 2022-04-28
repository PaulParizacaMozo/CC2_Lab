#include <iostream>
using namespace std;

bool esPar(int numero){
  if (numero%2==0){
    return true;
  }
  else{
    return false;
  }
}

int SumaValores (int numero){
  int suma=0;
  for (int i=0; i<=numero; i++){
    if (i%2!=0){
      suma+=i;
    }
  }
  return suma;
}

int main(){
  int numero,suma;
  while(true){
    cout<<"Ingrese un numero del 0 al 100 -> ";
    cin>>numero;
    if(numero>=0 && numero<=100){
      cout<<"El numero es valido"<<endl;
      break; 
    }
    else{
      cout<<"El numero no se encuentra en el rango de 0 a 100. Vuelva a intentarlo"<<endl;
    }
  }
  
  if (esPar(numero)==true){
    cout<<"El numero "<<numero<<" es par."<<endl;
  }
  else{

    cout<<"El numero "<<numero<<" no es par."<<endl;
  }
  
  suma=SumaValores(numero);
  cout<<"-> La suma de los valores impares entre el 0 y "<<numero<<" es -> "<<suma<<endl;
  
  return 0;
}
