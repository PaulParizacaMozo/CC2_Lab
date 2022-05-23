#include <iostream>
#include "ProductoBancario.h"
#include "Cuenta.h"
#include "CuentaJoven.h"
#include "Prestamo.h"
#include "Hipoteca.h"

using namespace std;

int main(){
  CuentaJoven cj1;
  cj1.setDatos("Juan",1800,20);
  //cj1.cliente = "Juan";
  cout<<"CuentaJoven:"<<endl;
  cj1.imprimir();
  
  Hipoteca h1;
  h1.setDatos("Pedro",2000,30);
  cout<<"Hipoteca:"<<endl;
  h1.imprimir();
  //h1.cliente = "Pedro";
  return 0;
}
