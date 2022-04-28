#include <iostream>
using namespace std;

string ConvertirABinario(int num){
  string aux,binario;
  while (num != 0){
    if (num%2 == 0){
      aux += "0";
    }
    else{
    	aux += "1";
    }
    num /= 2;
  }
  for(int i=aux.length()-1; i>=0; i--){
    binario += aux[i];
  }
  return binario;
}

int main (){
  int numero;
  string Nbinario;
  while (true){
    cout<<"Ingrese un numero entre 100 y 999 para convertir a binario -> ";
    cin>>numero;
    if(numero>=100 && numero<=999){
      Nbinario=ConvertirABinario(numero);
      cout<<"El numero "<<numero<<" en binario es -> "<<Nbinario<<endl;
      break;
    }
    else{
      cout<<"No es un numero que se encuentra entre 100 y 999. Vuelva a intentarlo"<<endl;
    }
  }
  return 0;
}
