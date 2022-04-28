#include <iostream>
using namespace std;

string Invertir(string palabra){
  string PalabraInvertida;
  for(int i=palabra.length()-1; i>=0; i--){
    PalabraInvertida += palabra[i];
    PalabraInvertida += ' ';
  }
  return PalabraInvertida;
}

int main(){
  string palabra;
  string PalabraInvertida;
  cout<<"Ingrese una frase o palabra para invertir -> ";
  getline(cin,palabra);
  PalabraInvertida=Invertir(palabra);
  cout<<PalabraInvertida<<endl;
  return 0;
}
