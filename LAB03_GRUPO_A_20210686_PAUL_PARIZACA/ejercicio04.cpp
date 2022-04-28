#include <iostream>
using namespace std;

bool Primo(int numero) {
  if (numero == 0 || numero == 1){
    return false;
  }
  for (int i = 2; i < numero / 2; i++) {
    if (numero % i == 0){ 
      return false;
    }
  }
  return true;
}

int main(){
  int cantidad=0;
  int numeros=1;
  int limite;
  cout<<"Ingrese hasta que numero se mostraran los numeros primos -> ";
  cin>>limite;
  cout<<endl;
  while(true){
    if (numeros<=limite){
      if(Primo(numeros)==true){
        cout<<"Primo numero "<<cantidad+1<<" -> "<<numeros<<endl;
        cantidad+=1;
      }
      numeros+=1;
    }
    else{
      break;
    }
  }
  cout<<"\nSe encontraron "<<cantidad<<" numeros primos del 1 al "<<limite<<endl;

  return 0;
}
