#include <iostream>
using namespace std;

void fibonacci(int CantNumeros){
  int fib1=0, fib2=1, fib3;
  cout<<"**Serie de fibonacci de "<<CantNumeros<<" elementos**"<<endl;
  cout<<"-> "<<fib2<<" ";
  for(int i=1;i<CantNumeros;i++){
    fib3=fib1+fib2;
    cout<<fib3<<" ";
    fib1=fib2;
    fib2=fib3;
  }
  cout<<endl;
}

int main(){
  int CantNumeros;
  cout<<"Ingrese la cantidad de numeros para la serie de fibonacci -> ";
  cin>>CantNumeros;
  fibonacci(CantNumeros);
  return 0;
}
