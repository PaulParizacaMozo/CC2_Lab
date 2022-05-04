#include <iostream>
using namespace std;

bool Primo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4){
    return false;
  }
  for (int i = 2; i < numero / 2; i++) {
    if (numero % i == 0){ 
      return false;
    }
  }
  return true;
}

void mostrarInvertido(int array[]){
  cout<<"Lista de numeros en orden descendente"<<endl;
  for (int i=99;i>=0;i--){
    cout<<array[i]<<" - ";
  }
  cout<<endl;
}

int main(){
  int array[100];
  int cantidad=0;
  int numeros=0;
  while(cantidad<100){
    if(Primo(numeros)==true){
      array[cantidad]=numeros;
      cantidad+=1;
    }
    numeros+=1;
  }

  cout<<endl;
  mostrarInvertido(array);
  cout<<endl;
  return 0;
}
