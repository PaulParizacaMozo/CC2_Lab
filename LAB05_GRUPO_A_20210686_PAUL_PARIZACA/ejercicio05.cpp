#include <iostream>
using namespace std;

void concatenacion(string *t1, string *t2){
  string *aux=t1;
  t1=t2;
  *t1+=" "+*aux;

  cout<<"El texto del puntero 1 es -> "<<*t1<<endl;
}

int main(){
  string texto1, texto2;
  string* t1 = &texto1;
  string* t2 = &texto2;
  cout<<"Ingrese el primer texto -> ";
  getline(cin,texto1);
  cout<<"Ingrese el segundo texto -> ";
  getline(cin,texto2);  

  concatenacion(t1,t2);
   
  return 0;
}
