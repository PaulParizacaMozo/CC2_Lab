#include <iostream>
using namespace std;

int main(){
  string flotante;
  string numero;
  cout<<"Ingrese un numero flotante -> ";
  cin>>flotante;
  cout<<"Numero con decimales -> "<<flotante<<endl;
  int contador=0;
  while (true)
  {
    if(flotante[contador]=='.' || flotante[contador]==','){
      break; 
    }
    numero+=flotante[contador];
    contador+=1;
  }

  cout<<"Numero redondeado -> "<<numero<<endl;
  return 0;
}
