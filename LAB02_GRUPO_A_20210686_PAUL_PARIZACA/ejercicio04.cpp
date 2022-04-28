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
  int N1,N2,contador=0;
  cout<<"Ingrese el numero 1 -> ";
  cin>>N1;
  cout<<"Ingrese el numero 2 -> ";
  cin>>N2;
  for (int i=N1; i<N2; i++){
    if(Primo(i)==true){
      cout<<"Numero primo "<<contador+1<<" -> "<<i<<endl;
      contador+=1;
    }
  }
  if (contador==0){
    cout<<"No se encontro numero primo en ese rango de valores."<<endl;
    cout<<"Se buscara el numero primo mas cercano"<<endl;
    int aumento=1;
    while(contador==0){
      if(Primo(N2+aumento)==true){
        cout<<"Numero primo mas cercano -> "<<N2+aumento<<endl;
        aumento+=1;
        contador+=1;
      }
    }   
  }
  return 0;
}
