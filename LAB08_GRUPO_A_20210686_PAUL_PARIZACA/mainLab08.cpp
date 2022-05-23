#include <iostream>
#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include "Cuadrado.h"
#include "Circulo.h"

int main(){
  //Ejercicio 1
  //Probar las clase Rectangulo y metodos creados
  Rectangulo Rect1("Azul",0,0,"Rectangulo 1",8,10);
  cout<<"Informacion del Rectangulo 1"<<endl;
  Rect1.imprimir();
  Rect1.setPunto(1,1);
  Rect1.setColor("Blanco");
  Rect1.calcularArea();
  Rect1.calcularPerimetro();
  Rect1.cambiarTam(2);
  cout<<"\nInformacion del Rectangulo 1 luego de los cambios"<<endl;
  Rect1.imprimir();
  Rect1.calcularArea();
  Rect1.calcularPerimetro();

  //Ejercicio 2,3,4
  //Probando las clases Elipse, Cuadrado, Circulo
  Elipse Elip1("Rojo",10,10,"Elipse 1",20,50);
  cout<<"Informacion del Elipse 1"<<endl;
  Elip1.imprimir();
  Elip1.calcularArea();
  Elip1.calcularPerimetro();
  Cuadrado Cuad1("Verde",100,100,"Cuadrado 1",10,10);
  cout<<"\nInformacion del Cuadrado 1"<<endl;
  Cuad1.imprimir();
  Cuad1.calcularArea();
  Cuad1.calcularPerimetro();
  Circulo Circ1("Amarillo",50,50,"Circulo 1",20,20);
  cout<<"\nInformacion del Circulo 1"<<endl;
  Circ1.imprimir();
  Circ1.calcularArea();
  Circ1.calcularPerimetro();
  cout<<endl;
  
  //Ejercicio 5,6,7,8
  //Crear un arreglo de punteros de la clase forma
  //Con un bucle colocar todas las formas del mismo color y misma posicion
  //Ejercicio5
  Forma *formaPtr[4];
  formaPtr[0]=&Rect1;
  formaPtr[1]=&Elip1;
  formaPtr[2]=&Cuad1;
  formaPtr[3]=&Circ1;
  for (int i=0; i<4; i++){
    formaPtr[i]->setColor("Celeste");
    formaPtr[i]->setPunto(30,30);
  }
  
  //Ejercicio 6 y 7
  for (int i=0; i<4; i++){
    formaPtr[i]->imprimir();
    cout<<endl;
  }
  //Ejercicio 8
  int MayorArea=0;
  int indice;
  for (int i=0; i<4; i++){
    if(formaPtr[i]->getArea()>MayorArea){
      MayorArea = formaPtr[i]->getArea();
      indice = i;
    }
  }
  cout<<"La forma que tiene el area maxima es ->"<<endl;
  formaPtr[indice]->imprimir();
  cout<<"\nCon un area maxima de:"<<endl;
  formaPtr[indice]->calcularArea();
  formaPtr[indice]->calcularPerimetro();

  return 0;
}


