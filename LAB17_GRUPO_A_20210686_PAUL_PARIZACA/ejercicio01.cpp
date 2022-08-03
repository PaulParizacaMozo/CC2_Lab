#include <iostream>
using namespace std;

//Operaciones genericas basicas para que funcionen con cualquier dato.
template <typename tipo>
tipo suma(tipo n1, tipo n2){
  return n1 + n2;
}

template <typename tipo>
tipo resta(tipo n1, tipo n2){
  return n1 - n2;
}

template <typename tipo>
tipo multiplicar(tipo n1, tipo n2){
  return n1 * n2;
}

template <typename tipo>
tipo division(tipo n1, tipo n2){
  return n1 / n2;
}

int main(){
  
  cout<<"Suma -> "<<suma<float>(3.4,3.4)<<endl;
  cout<<"Suma -> "<<suma<int>(3,5)<<endl;

  cout<<"Resta -> "<<resta<float>(4.4,3.2)<<endl;
  cout<<"Resta -> "<<resta<int>(3,5)<<endl;

  cout<<"Multiplicacion -> "<<multiplicar<float>(3.4,3.4)<<endl;
  cout<<"Multiplicacion -> "<<multiplicar<int>(3,5)<<endl;
  
  cout<<"Division -> "<<division<float>(3.4,3.4)<<endl;
  cout<<"Division -> "<<division<double>(5,2)<<endl;

  return 0;
}
