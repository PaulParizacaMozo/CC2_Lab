#include <iostream>
#include <algorithm>
#include <array>
#include <time.h>
using namespace std;

class Elemento{
  public:
    int a = 1 + rand() % (100 - 1);
    int b = 1 + rand() % (100 - 1);
  public:
    void mostrar(){
      cout<<a<<"\t-\t"<<b<<endl;
    }
};

int main(){
  srand(time(NULL)); 
  
  array<Elemento,20>Lista; //Arreglo de 20 objetos de Elemento con atributos aletorios
  
  cout<<"Vector sin ordenar"<<endl;
  for(int i=0; i<20; i++){
    Lista[i].mostrar();
  }
  
  //Se crearon 3 criterios de comparacion usando functores + la funcion sort
  struct Comparacion1{
      bool operator()(const Elemento& obj1,const Elemento& obj2) const { 
        return obj1.a < obj2.a; }
  };
  
  struct Comparacion2{
      bool operator()(const Elemento& obj1,const Elemento& obj2) const { 
        return obj1.b < obj2.b; }
  };

  struct Comparacion3{
      bool operator()(const Elemento& obj1,const Elemento& obj2) const { 
        return obj1.a < obj2.b; }
  };

  sort(Lista.begin(), Lista.end(), Comparacion1());//Ordena el vector segun el criterio obj1.a < obj2.a
  cout<<"\nVector Ordenado obj1.a < obj2.a"<<endl;
  for(int i=0; i<20; i++){
    Lista[i].mostrar();
  }

  sort(Lista.begin(), Lista.end(), Comparacion2());//Ordena el vector segun el criterio obj1.b < obj2.b
  cout<<"\nVector Ordenado obj1.b < obj2.b"<<endl;
  for(int i=0; i<20; i++){
    Lista[i].mostrar();
  }

  sort(Lista.begin(), Lista.end(), Comparacion3());//Ordena el vector segun el criterio obj1.a < obj2.b
  cout<<"\nVector Ordenado obj1.a < obj2.b"<<endl;
  for(int i=0; i<20; i++){
    Lista[i].mostrar();
  }

  return 0;
}

