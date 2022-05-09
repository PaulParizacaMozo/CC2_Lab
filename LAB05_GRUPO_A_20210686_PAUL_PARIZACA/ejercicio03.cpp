#include <iostream>
#include <time.h>
using namespace std;

struct nodo{
  int valor;
  nodo *siguiente;
};

void insertarDato(nodo *&lista, int _valor){
  nodo *nuevoNodo = new nodo();
  nuevoNodo -> valor = _valor;
  nodo *aux = lista;
  nodo *aux1;

  while ((aux != NULL) && (aux -> valor < _valor)){
    aux1 = aux;
    aux = aux->siguiente;
  }

  if (lista == aux){
    lista = nuevoNodo;
  }
  else{
    aux1 -> siguiente = nuevoNodo;
  }
  nuevoNodo -> siguiente = aux;
}

void mostrarLista(nodo *lista){
  nodo *nodoActual = new nodo();
  nodoActual = lista;
  cout<<"\nLista de 10000 nodos con numeros aleatorios del 1 al 9999 -> "<<endl;
  while (nodoActual != NULL){
    if (nodoActual -> siguiente != NULL){
      cout<<nodoActual->valor<<" - ";
      nodoActual = nodoActual -> siguiente;
    }
    else{
      cout<<nodoActual->valor<<" ";
      nodoActual = nodoActual -> siguiente;
      cout<<endl<<"Fin de la lista enlazada"<<endl;
    }
  }
}

int main(){
  nodo *lista = NULL;

  srand(time(NULL));
  for (int i=0; i<10000; i++){
    int dato;
    dato=1+rand()%(10000-1);
    insertarDato(lista,dato);
  }
  mostrarLista(lista);
  return 0;
}
