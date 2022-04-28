#include <iostream>
using namespace std;

int main (){
  int suma=0;
  for (int i = 2; i <= 100 ; i++) {
    if (i%2==0){
      suma += i;
    }
  }
  cout<<"La suma de los numeros pares desde 0 hasta 100 es -> "<<suma<<endl;

  return 0;
}
