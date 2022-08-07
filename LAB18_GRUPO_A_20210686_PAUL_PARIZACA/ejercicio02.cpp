#include <iostream>
using namespace std;

template <int numero>
struct fibonacci{
  enum{
    valor = fibonacci<numero - 2>::valor + fibonacci<numero - 1>::valor
  };
};

template<>
struct fibonacci<1>{
  enum{
    valor = 1
  };
};

template<>
struct fibonacci<2>{
  enum{
    valor = 1
  };
};

int main(){
  const int num = 11;
  int resultado = num;
  cout<<"Valor de la posicion "<<num<<" en la serie de fibonacci."<<endl;
  resultado = fibonacci<num>::valor;
  cout<<"-> "<<resultado<<endl;
  return 0;
}
