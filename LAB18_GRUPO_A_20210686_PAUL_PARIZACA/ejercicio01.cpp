#include <iostream>
using namespace std;

template <int numero>
struct suma{
  enum{
    valor = numero + suma<numero - 1>::valor
  };
};

template<>
struct suma<1>{
  enum{
    valor = 1
  };
};

int main(){
  const int num = 10;
  int resultado = num;
  cout<<"Suma de numeros consecutivos del 1 al "<<num<<endl;
  resultado = suma<num>::valor;
  cout<<"Resultado -> "<<resultado<<endl;
  return 0;
}
