/* 
Implemente un programa con clases que calcule el área de un rectángulo 
y perímetro. 
*/

#include <iostream>
#include "Rectangulo.h"
#include "Rectangulo.cpp"
using namespace std;

int main(){
  Rectangulo rect1(10,5);
  Rectangulo rect2(5,15);

  cout<<"\nPrimer Rectangulo\n"<<endl;
  rect1.CalcularArea();
  rect1.CalcularPerimetro();
  
  cout<<"\nSegundo Rectangulo\n"<<endl;
  rect2.CalcularArea();
  rect2.CalcularPerimetro();

  return 0;
}
