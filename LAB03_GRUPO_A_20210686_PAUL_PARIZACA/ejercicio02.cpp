#include <iostream>
using namespace std;

bool esBisiesto(int año){
  if (año%4==0){
    if(año%100!=0){
      return true;
    }
    else{
      if (año%400==0){
	return true;
      }
      else{
	return false;
      }
    }
  }
  else{
    return false;
  }
}

int main(){
  int año;
  cout<<"Ingrese el año para saber si es bisiesto -> ";
  cin>>año;

  if (esBisiesto(año)==true){
    cout<<"El año "<<año<<" es bisiesto."<<endl;
  }
  else{
    cout<<"El año "<<año<<" no es bisiesto."<<endl;
  }
 
  return 0;
}
