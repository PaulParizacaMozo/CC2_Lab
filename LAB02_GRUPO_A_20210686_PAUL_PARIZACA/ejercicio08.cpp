#include <iostream>
using namespace std;

void crearTabla(int numero){
  cout<<"TABLA DEL "<<numero<<endl;
  for (int i=1; i<13; i++){
    cout<<"-> "<<i<<" * "<<numero<<" = "<<i*numero<<endl;
  }
}

int main(){
  int numero;
  cout<<"Ingrese el numero para generar la tabla de multiplicar -> ";
  cin>>numero;
  crearTabla(numero);
  
  return 0;
}
