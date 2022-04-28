#include <iostream>
using namespace std;

void Edad(int dA,int mA, int aA, int dN, int mN, int aN){
  int dEdad, mEdad, aEdad;
  int meses[]={31,28,31,30,31,30,31,31,30,31,30,31};
  if (mA>=mN){
    aEdad = aA-aN;
    if (dA>dN){
      dEdad = dA-dN;
      mEdad = mA-mN;
    }
    else{
      dEdad = meses[mA+1]-dN+dA;
      mEdad = mA-mN-1;
    }
  }
  else{
    aEdad = aA-aN-1;
    if (dA>dN){
      dEdad = dA-dN;
      mEdad = 12-mN+mA;
    }
    else
    {
      dEdad = meses[mA+1]-dN+dA;
      mEdad = 12-mN+mA-1;
    }
  }
cout<<"\nLa edad actual es -> "<<aEdad<<" años, "<<mEdad<<" meses, "<<dEdad<<" dias."<<endl;
}

int main(){
  int diaActual,mesActual,añoActual;
  int diaNac,mesNac,añoNac;
  cout<<"**FECHA ACTUAL**"<<endl;
  cout<<" Ingrese el dia -> "; cin>>diaActual;
  cout<<" Ingrese el mes -> "; cin>>mesActual;
  cout<<" Ingrese el año -> "; cin>>añoActual;
  cout<<"**FECHA DE NACIMIENTO**"<<endl;
  cout<<" Ingrese el dia -> "; cin>>diaNac;
  cout<<" Ingrese el mes -> "; cin>>mesNac;
  cout<<" Ingrese el año -> "; cin>>añoNac;

  Edad(diaActual,mesActual,añoActual,diaNac,mesNac,añoNac);
  return 0;
}
