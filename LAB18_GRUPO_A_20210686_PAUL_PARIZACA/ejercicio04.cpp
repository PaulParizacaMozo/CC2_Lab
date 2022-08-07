#include <iostream>
#include <string>
using namespace std;

string getValor(int numero){
  switch(numero){
    case 10: return "A";
    case 11: return "B";
    case 12: return "C";
    case 13: return "D";
    case 14: return "E";
    case 15: return "F";
  }
  return to_string(numero);
}

string getHex(int numero){
  if(to_string(numero) != getValor(numero)){
    return getValor(numero);
  }
  string digito = getValor(numero % 16);
  if(numero >= 16){
    int resto = numero / 16;
    string restoString = getHex(resto);
    return restoString + digito;
  }
  return to_string(numero);
}

int main(){
  int numero = 123456789;
  cout<<"El numero en decimal es -> "<<numero<<endl;
  string resultado = getHex(numero);
  cout<<"El numero en hexadecimal es -> "<<resultado<<endl;

  return 0;
}
