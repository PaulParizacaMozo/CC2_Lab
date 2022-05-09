#include <iostream>
using namespace std;

void intercambio(int *N1, int *N2){
  int aux=*N1;
  *N1=*N2;
  *N2=aux;
}

int main(){
  
  int Num1,Num2;
  int *N1=&Num1;
  int *N2=&Num2;

  cout<<"Ingrese el primer numero -> ";
  cin>>Num1;
  cout<<"Ingrese el segundo numero  -> ";
  cin>>Num2;

  cout<<"\nValor original del primer numero -> "<<Num1<<endl;
  cout<<"Valor original del segundo numero -> "<<Num2<<endl;
  
  intercambio(N1,N2);

  cout<<"Valor intercambiado del primer numero -> "<<Num1<<endl;
  cout<<"Valor intercambiado del segundo numero -> "<<Num2<<endl;

  return 0;
}
