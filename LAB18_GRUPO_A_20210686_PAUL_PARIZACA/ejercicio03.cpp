#include <iostream>
using namespace std;

template <int base, int exponente>
struct potencia{
  enum{
    valor = base * potencia<base, exponente - 1>::valor
  };
};

template <int base>
struct potencia<base,1>{
  enum{
    valor = base
  };
};

template <int base>
struct potencia<base, 0> {
  enum {
    valor = 0
  };
};

int main(){
  const int base = 3;
  const int exponente = 4;
  int resultado;
  cout<<"El numero base es -> "<<base<<endl;
  cout<<"El exponente es -> "<<exponente<<endl;
  resultado = potencia<base,exponente>::valor;
  cout<<"El resultado de la potencia ("<<base<<" elevado a "<<exponente<<") es -> "<<resultado<<endl;

  return 0;
}
