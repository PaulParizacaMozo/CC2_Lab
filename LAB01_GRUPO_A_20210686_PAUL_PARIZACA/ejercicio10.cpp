#include <iostream>
using namespace std;

int main (){
  string passwd;
  string aux;

  cout<<"Ingrese la nueva contraseña -> ";
  cin>>passwd;

  while (true){
    cout<<"Ingrese la contraseña -> ";
    cin>>aux;
    if(passwd==aux){
      cout<<"Contraseña correcta"<<endl;
      break;
    }
    else{
      cout<<"Contraseña incorrecta. Vuelva a intentarlo"<<endl;
    } 	
  }
  return 0;
}
