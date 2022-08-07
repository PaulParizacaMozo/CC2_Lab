#include <iostream>
using namespace std;
 
template <int numero>
struct convertir{
  enum{
    valor = numero % 2 + 10 * convertir<numero / 2>::valor
  };
};

template <>
struct convertir<0>{
  enum{
    valor = 0 
  };
};

int main(){
  const int num = 579;
  int resultado = num;
  cout<<"El numero en decimal es -> "<<num<<endl;
  resultado = convertir<num>::valor;
  cout<<"El numero en binario es -> "<<resultado<<endl;
  
  return 0;
}
