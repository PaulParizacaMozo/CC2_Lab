#include <iostream>
using namespace std;

bool AdivisorB(int A, int B){
  if(B%A==0){
    return true;
  }
  else{
    return false;
  }
}

int main (){
  int NumA,NumB;
  cout<<"Ingrese el valor para el primer numero -> ";
  cin>>NumA;
  cout<<"Ingrese el valor para el segundo numero -> ";
  cin>>NumB;
  
  if (AdivisorB(NumA,NumB)==true){
    cout<<"El numero "<<NumA<<" es divisor del numero "<<NumB<<endl;
  }
  else{
    cout<<"El numero "<<NumA<<" no es divisor del numero "<<NumB<<endl;
  }

  if (AdivisorB(NumB,NumA)==true){
    cout<<"El numero "<<NumB<<" es divisor del numero "<<NumA<<endl;
  }
  else{
    cout<<"El numero "<<NumB<<" no es divisor del numero "<<NumA<<endl;
  }
  return 0;
}
