#include <iostream>
using namespace std;

struct nodo{
  int valor;
  string texto;
  void *auxiliar=&texto;
  nodo *siguiente;
};

void insertarEntero(nodo *&lista, int _valor){
  nodo *nuevoNodo = new nodo();
  nuevoNodo -> valor = _valor;
  nuevoNodo -> auxiliar = nullptr;
  nodo *aux = lista;
  nodo *aux1;

  while(aux != NULL){
    aux1=aux;
    aux = aux -> siguiente;
  }
  if (lista == aux){
    lista = nuevoNodo;
  }
  else{
    aux1 -> siguiente = nuevoNodo;
  }
  nuevoNodo -> siguiente = aux;
}

void insertarString(nodo *&lista, string _texto){
  nodo *nuevoNodo = new nodo();
  nuevoNodo -> texto = _texto;
  nodo *aux = lista;
  nodo *aux1;

  while(aux != NULL){
    aux1=aux;
    aux = aux -> siguiente;
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
  cout<<endl;
  while (nodoActual != NULL){
    if(nodoActual -> siguiente != NULL){
      if (nodoActual->auxiliar!=nullptr){
        cout<<nodoActual->texto<<" - ";
        nodoActual = nodoActual -> siguiente;
      }
      else{
        cout<<nodoActual->valor<<" - ";
        nodoActual = nodoActual -> siguiente;
      }
    }
    else{
      if (nodoActual->auxiliar!=nullptr){
        cout<<nodoActual->texto<<" ";
        nodoActual = nodoActual -> siguiente;
      }
      else{
        cout<<nodoActual->valor<<" ";
        nodoActual = nodoActual -> siguiente;
      }
    }
  }
  cout<<endl<<endl;
}

void busqueda(nodo *lista, int indice){
  nodo *nodoActual = new nodo();
  nodoActual = lista; 
  for (int i=0; i<indice; i++){
    if(indice==i+1){
      if(nodoActual->auxiliar!=nullptr){
        cout<<"\n  El contenido del nodo "<<indice<<" es -> "<<nodoActual->texto<<endl;
	cout<<"  El tipo de dato es cadena(string)\n"<<endl;
      }
      else{
        cout<<"\n  El contenido del nodo "<<indice<<" es -> "<<nodoActual->valor<<endl;
	cout<<"  El tipo de dato es entero(int)\n"<<endl;
      }
    }
    nodoActual = nodoActual -> siguiente;
  }
}

int main(){
  int val=true;
  nodo *lista = NULL;
  insertarEntero(lista,2);
  insertarString(lista,"a");
  insertarEntero(lista,5);
  insertarEntero(lista,6);
  insertarEntero(lista,1);
  insertarString(lista,"b");
  insertarString(lista,"c");
  insertarEntero(lista,96);

  cout<<"La lista inicial es la siguiente: "<<endl;
  mostrarLista(lista);

  int opcion;
  int _valor;
  string _texto;
  while (val==true){
    cout<<"1.- Insertar entero\n2.- Insertar cadena\n3.- Mostrar Lista\n4.- Busqueda por indice\n5.- Salir"<<endl;
    cout<<"Ingrese la opcion que desea ejecutar -> ";
    cin>>opcion;

    switch (opcion){
      case 1:
	cout<<" Ingrese el valor -> ";
	cin>>_valor;
	insertarEntero(lista,_valor);
	break;
      case 2:
	cin.ignore();
	cout<<" Ingrese la cadena -> ";
	getline(cin,_texto);
	insertarString(lista,_texto);
	break;     
      case 3:
	cout<<"\nLista Actual:"<<endl;
	mostrarLista(lista);
	break;     
      case 4:
	int indice;
	cout<<" Ingrese el indice para ver la informacion -> ";
	cin>>indice;
	busqueda(lista,indice);
	break;
      case 5:
	val=false;
	break;
    }
  }
  return 0;
}
