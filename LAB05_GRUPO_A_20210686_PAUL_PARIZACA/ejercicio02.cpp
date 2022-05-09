#include <iostream>
#include <time.h>
using namespace std;

void crearVector(float *&vector, int tam){
  vector = new float[tam];
}

void asignarValores(float *vector1, float *vector2, int tam){
  for (int i=0; i<tam; i++){
    vector1[i]=(float)(1+rand()%(1000-1))/100;
    vector2[i]=(float)(1+rand()%(1000-1))/100;
  }
}

void eliminarVector(float *vector){
  delete [] vector;
}

void mostrarVector(float *vector, int tam, string pos){
  cout<<endl<<"Vector "<<pos<<endl<<"->     ";
  for (int i=0; i<tam; i++){
    cout<<vector[i]<<"\t";
  }
  cout<<endl;
}

void ProductoPunto(float *vector1, float *vector2, int tam){
  float ProdSuma=0;
  for(int i=0; i<tam ;i++){
    ProdSuma += vector1[i]*vector2[i];
  }
  cout<<"El producto punto de los vectore es -> "<<ProdSuma<<endl;
  cout<<"--------------------------------------------------"<<endl;
}

int main(){
  float *V1;
  float *V2;
  int tam;
  cout<<"Ingrese el tamaño de los vectores -> ";
  cin>>tam;
  
  srand(time(NULL));
  for (int i=0; i<1000000; i++){
    crearVector(V1,tam);
    crearVector(V2,tam);
    asignarValores(V1,V2,tam);
    mostrarVector(V1,tam,"1");
    mostrarVector(V2,tam,"2");
    ProductoPunto(V1,V2,tam);
    eliminarVector(V1);
    eliminarVector(V2);
  }
  cout<<endl<<"Se completo el proceso de iteracion"<<endl;

  return 0;
}
