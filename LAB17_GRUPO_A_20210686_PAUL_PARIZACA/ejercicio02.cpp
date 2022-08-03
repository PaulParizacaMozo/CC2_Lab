#include <iostream>
#include<time.h>
using namespace std;

template<class tipo>
class Arreglo{
  private:
    tipo* arreglo = new tipo[100];
  public:
    ~Arreglo();
    void insertarElementos();
    void ordenar();
    void mostrar();
};

template<class tipo>
Arreglo<tipo>::~Arreglo(){
  delete [] arreglo;
}

template<typename tipo>
void Arreglo<tipo>::insertarElementos(){
  srand(time(NULL));
  tipo aux;
  for(int i=0 ; i<100; i++){
    aux = static_cast<tipo>((340 +rand() % (1220 - 1))/float(10));
    arreglo[i] = aux;
  } 
}

template <typename tipo>
void Arreglo<tipo>::ordenar(){
  for (int i=1; i<100; i++){
    int j=i;
    while (j>0 && arreglo[j-1]>arreglo[j]) {
      tipo auxiliar = arreglo[j];
      arreglo[j] = arreglo[j-1];
      arreglo[j-1] = auxiliar;
      j--;
    }
  }
}

template<typename tipo>
void Arreglo<tipo>::mostrar(){
  for(int i=0 ; i<100; i++){
    cout<<arreglo[i]<<" - ";
  } 
  cout<<endl;
}

int main(){
  //Solo se crea un arreglo con el tipo de dato que queremos y llamamos
  //a las funciones respectivas, los valores son ingresados aletoriamente
  //en un arreglo de 100 elementos.

  Arreglo<char> ar;
  cout<<"\nCHAR"<<endl;
  ar.insertarElementos();
  ar.ordenar();
  ar.mostrar();

  Arreglo<int> ar1;
  cout<<"\nINT"<<endl;
  ar1.insertarElementos();
  ar1.ordenar();
  ar1.mostrar();
  
  Arreglo<float> ar2;
  cout<<"\nFLOAT"<<endl;
  ar2.insertarElementos();
  ar2.ordenar();
  ar2.mostrar();
  return 0;
}
