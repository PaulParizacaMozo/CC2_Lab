#include "Lista.h"
#include <iostream>
using namespace std;

//ejercicio 01
void Lista::insertarNodoAlFinal(int dato){
  Nodo* nuevoNodo = new Nodo();
  nuevoNodo->setDato(dato);
  Nodo* aux = ListaEnlazada;
  Nodo* aux2;
  if (aux == nullptr){
    ListaEnlazada = nuevoNodo;
    nuevoNodo->setSiguiente(aux);
  }
  else{
    while (aux->getSiguiente() != nullptr){
      aux = aux->getSiguiente();
    }
    aux2 = aux->getSiguiente();
    aux->setSiguiente(nuevoNodo);
    nuevoNodo->setSiguiente(aux2);
  }
}

//ejercicio 02
void Lista::insertarNodoAlComienzo(int dato){
  Nodo* nuevoNodo = new Nodo();
  nuevoNodo->setDato(dato);
  Nodo* aux = ListaEnlazada;
  ListaEnlazada = nuevoNodo;
  nuevoNodo->setSiguiente(aux);
}

//ejercicio 03
void Lista::insertarNodoCualquierPos(int dato){
  Nodo* nuevoNodo = new Nodo();
  nuevoNodo->setDato(dato);
  Nodo* aux = ListaEnlazada;
  Nodo* cont = ListaEnlazada;
  Nodo* aux2;
  int contador=1;
  int indice;
  while (cont != nullptr){
    cont = cont->getSiguiente();
    contador++;
  }
  do{
    cout<<" Ingrese el indice de la posicion del nuevo elemento -> ";
    cin>>indice;
  }while(indice > contador || indice < 1);

  indice--;

  if (indice == 0){
    ListaEnlazada = nuevoNodo;
    nuevoNodo->setSiguiente(aux);
  }
  else{
    for(int i=0; i<indice-1; i++){
      aux = aux->getSiguiente();
    }
    aux2 = aux->getSiguiente();
    aux->setSiguiente(nuevoNodo);
    nuevoNodo->setSiguiente(aux2);
  }
}

//ejercicio 04
void Lista::eliminarNodoFinal(){
  if (ListaEnlazada == nullptr){
    cout<<"   La lista esta vacia. No hay nada que borrar"<<endl;
  }
  else{
    Nodo* aux = ListaEnlazada;
    Nodo* aux2;
    if(aux->getSiguiente() == nullptr){
      ListaEnlazada = nullptr;
      delete aux;
      cout<<"  Nodo eliminado con exito"<<endl;
    }
    else{
      aux2 = aux;
      aux = aux->getSiguiente();
      while (aux->getSiguiente() != nullptr){
        aux2 = aux2->getSiguiente();
        aux = aux->getSiguiente();
      }
      aux2->setSiguiente(nullptr);
      delete aux;
      cout<<"  Nodo eliminado con exito"<<endl;
    }
  }
}

//ejercicio 05
void Lista::eliminarNodoInicial(){
  if (ListaEnlazada == nullptr){
    cout<<"   La lista esta vacia. No hay nada que borrar"<<endl;
  }
  else{
    Nodo* aux = ListaEnlazada;
    if(aux->getSiguiente() == nullptr){
      ListaEnlazada = nullptr;
      delete aux;
      cout<<"  Nodo eliminado con exito"<<endl;
    }
    else{
      ListaEnlazada = ListaEnlazada->getSiguiente();
      delete aux;
      cout<<"  Nodo eliminado con exito"<<endl;
    }
  }
}

//ejercicio 06
void Lista::eliminarNodoCualquierPos(){
  if (ListaEnlazada == nullptr){
    cout<<"   La lista esta vacia. No hay nada que borrar"<<endl;
  }
  else{
    Nodo* aux = ListaEnlazada;
    Nodo* aux2;
    Nodo* cont = aux;
    int contador=0;
    int indice;
    while (cont != nullptr){
      cont = cont->getSiguiente();
      contador++;
    }
    do{
      cout<<" Ingrese el indice de la posicion del elemento a eliminar -> ";
      cin>>indice;
    }while(indice > contador || indice < 1);
    
    indice--;
    if (indice == 0){
      ListaEnlazada = ListaEnlazada->getSiguiente();
      delete aux;
    }
    else{
      for(int i=0; i<indice-1; i++){
        aux = aux->getSiguiente();
      }
      aux2 = aux->getSiguiente();
      aux->setSiguiente(aux2->getSiguiente());
      delete aux2; 
    }
  }
}

//Funciones para ordenamiento Quicksort Ascendente
int particionAscendente(int *arreglo, int inicio, int final) {
  int pivote = arreglo[inicio];
  int i = (inicio + 1);
  for (int j = i; j <= final; j++) {
      if (arreglo[j] <= pivote) {
          swap(arreglo[i], arreglo[j]);
          i++;
      }
  }
  swap(arreglo[inicio], arreglo[i-1]); 
  return (i - 1);
}

void quickSortAscendente(int *arreglo, int inicio, int final) {
  if (inicio < final) {
      int pi = particionAscendente(arreglo, inicio, final);
      quickSortAscendente(arreglo, inicio, pi - 1); 
      quickSortAscendente(arreglo, pi + 1, final); 
  }
}

//Funciones para ordenamiento Quicksort Descendente
int particionDescendente(int *arreglo, int inicio, int final) {
  int pivote = arreglo[inicio];
  int i = (inicio + 1);
  for (int j = i; j <= final; j++) {
      if (arreglo[j] >= pivote) {
          swap(arreglo[i], arreglo[j]);
          i++;
      }
  }
  swap(arreglo[inicio], arreglo[i-1]); 
  return (i - 1);
}

void quickSortDescendente(int *arreglo, int inicio, int final) {
  if (inicio < final) {
      int pi = particionDescendente(arreglo, inicio, final);
      quickSortDescendente(arreglo, inicio, pi - 1); 
      quickSortDescendente(arreglo, pi + 1, final); 
  }
}

//ejercicio 07
void Lista::ordenarListaAscendente(){
  Nodo* aux = ListaEnlazada;
  Nodo* aux2;
  Nodo* cont = aux;
  int contador=0;
  while (cont != nullptr){
    cont = cont->getSiguiente();
    contador++;
  }
  int* arreglo = new int[contador];
  for(int i=0; i<contador; i++){
    arreglo[i] = aux->getDato();
    aux = aux->getSiguiente();
  }
  quickSortAscendente(arreglo,0,contador-1);
  aux2 = ListaEnlazada;
  aux = aux2;
  ListaEnlazada = nullptr;
  for(int i=0; i<contador; i++){
    insertarNodoAlFinal(arreglo[i]);
  }
  while (aux2 != nullptr){
    Nodo* borrar = aux2;
    if(borrar->getSiguiente() == nullptr){
      aux2 = nullptr;
      delete borrar;
    }
    else{
      aux2 = aux2->getSiguiente();
      delete borrar;
    }
  }
  delete aux2;
}

//ejercicio 08
void Lista::ordenarListaDescendente(){
  Nodo* aux = ListaEnlazada;
  Nodo* aux2;
  Nodo* cont = aux;
  int contador=0;
  while (cont != nullptr){
    cont = cont->getSiguiente();
    contador++;
  }
  int* arreglo = new int[contador];
  for(int i=0; i<contador; i++){
    arreglo[i] = aux->getDato();
    aux = aux->getSiguiente();
  }
  quickSortDescendente(arreglo,0,contador-1);
  aux2 = ListaEnlazada;
  aux = aux2;
  ListaEnlazada = nullptr;
  for(int i=0; i<contador; i++){
    insertarNodoAlFinal(arreglo[i]);
  }
  while (aux2 != nullptr){
    Nodo* borrar = aux2;
    if(borrar->getSiguiente() == nullptr){
      aux2 = nullptr;
      delete borrar;
    }
    else{
      aux2 = aux2->getSiguiente();
      delete borrar;
    }
  }
  delete aux2;
}

void Lista::mostrarLista(){
  Nodo* aux = new Nodo();
  aux = ListaEnlazada;
  cout<<"\n Lista -> ";
  if (aux == nullptr){
    cout<<"La lista no tiene elementos que mostrar."<<endl;
  }
  else{
    while (aux != nullptr){
      if(aux->getSiguiente()==nullptr){
        cout<<aux->getDato()<<" ";
      }
      else{
        cout<<aux->getDato()<<" - ";
      }
      aux = aux->getSiguiente();
    }
    cout<<endl;
  }
}

