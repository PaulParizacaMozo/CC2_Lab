#include <iostream>
using namespace std;

int main(){
  int suma,cantidad=10;
  int arreglo[10];
  for (int i=0; i<cantidad; i++) {
    cout<<"Ingrese el valor para el dato "<<i+1<<" -> ";
    cin>>arreglo[i];
  }
  
  for (int i=0; i<cantidad; i++) {
    if(arreglo[i]<0){
      suma+=arreglo[i];
    }
  }
  cout<<"La suma de los numeros negativos es -> "<<suma<<endl;
  return 0;
}
