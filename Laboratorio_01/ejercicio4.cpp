#include <iostream>
#include <string.h>
#include <string>
#include <time.h>
using namespace std;


void Convertir(int HoraActual, int MinutosActual){
  
  //fecha
  char fecha[25];
  time_t tiempoActual = time(NULL);
  ctime(&tiempoActual);
  strcpy(fecha, ctime(&tiempoActual));
  string nuevo(fecha);
  cout<<"Fecha \n -> "<<nuevo.substr(0,10)+" "+nuevo.substr(20,24);
  
  //hora
  int minutos;
  int resto;
  cout<<"Ingrese los minutos a restar -> "; 
  cin>>minutos;
  resto=MinutosActual-minutos;
  int contador=0;
  while(resto<0){
    contador++;
    resto+=60;
  }
  cout<<"Hora \n -> "<<HoraActual-contador<<":"<<resto<<endl;
}

int main(){
  int hora,minutos;
  cout<<"Ingresar Hora actual (HH) -> ";
  cin>>hora;
  cout<<"Ingresar minutos actual (MM) -> ";
  cin>>minutos;
  Convertir(hora,minutos);
  return 0;
}
