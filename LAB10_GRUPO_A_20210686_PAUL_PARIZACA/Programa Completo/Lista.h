#include "Nodo.h"
#ifndef LISTA_H
#define LISTA_H

class Lista{
  private:
    Nodo* ListaEnlazada = nullptr;
  public: 
    void insertarNodoAlFinal(int);        //ejercicio 01
    void insertarNodoAlComienzo(int);     //ejercicio 02
    void insertarNodoCualquierPos(int);   //ejercicio 03
    void eliminarNodoFinal();             //ejercicio 04
    void eliminarNodoInicial();           //ejercicio 05
    void eliminarNodoCualquierPos();      //ejercicio 06
    void ordenarListaAscendente();        //ejercicio 07
    void ordenarListaDescendente();       //ejercicio 08
    void mostrarLista();
};

#endif
