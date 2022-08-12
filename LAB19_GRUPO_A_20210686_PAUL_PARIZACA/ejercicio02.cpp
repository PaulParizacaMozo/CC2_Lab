#include <iostream>
#include <vector>
using namespace std;

class buscar{
  private:
    vector<int>Numeros{1,2,3,2,4,2,1,4,2,1,2,3,1,1,3,4};
  public:
    vector<int> operator()(int, int , int );
};

vector<int> buscar::operator()(int inicio, int final, int numero){
  vector<int>Indices;
  for(int i=inicio; i<final; i++){
    if(Numeros[i] == numero){
      Indices.push_back(i);
    }
  }
  return Indices;
}

int main(){

  vector<int>indices; //Vector nuevo
  int numero = 1;

  buscar f;
  indices = f(0,15,numero); //El functor retornara un vector que sera almacenado en el vector indices creado con anterioridad.
  
  //Mostramos el contenido del vector
  //En este caso todos los indices del vector que contenian el numero 1
  cout<<"Indices del numero -> "<<numero<<endl;
  for(int i : indices){
    cout<<"Indice -> "<<i<<endl;
  }

  return 0;
}
