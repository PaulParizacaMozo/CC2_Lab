#include <iostream>
using namespace std;

bool Buscar(int array[],int numero){
  for (int i=0; i<8; i++){
    if (array[i]==numero){
      return true;
    }
  }
  return false;
}

void Llenar(int array[]){
  for (int i=0; i<8; i++){
    cout<<"Ingresar el numero "<<i+1<<" -> ";
    cin>>array[i];
  }
}

int main(){
  int array[8];
  int numero;
  Llenar(array); 
  cout<<"\nIngrese el numero a buscar -> ";
  cin>>numero;
  if(Buscar(array,numero)==true){
    cout<<"El numero "<<numero<<" si se encuentra en el array."<<endl;
  }
  else{
    cout<<"El numero "<<numero<<" no se encuentra en el array."<<endl;
  }
  
  return 0;
}
