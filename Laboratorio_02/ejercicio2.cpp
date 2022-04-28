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

int main (){
  int cantidad=0;
  int numeros=0;
  while(cantidad<50){
    if(Primo(numeros)==true){
      cout<<"Primo numero "<<cantidad+1<<" -> "<<numeros<<endl;
      cantidad+=1;
    }
    numeros+=1;
  }
  return 0;
}
