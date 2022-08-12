#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
//vector<vector<int>>Estadistica(5, vector<int>(2));

class Persona{
  private:
    int edad;
    float peso;
  public:
    void operator()(int edad);
};

void Persona::operator()(int edad){
  vector<vector<int>>Estadistica{{2,14},{3,20},{5,32},{7,42},{8,44}};
  float mEdad = 0;
  float mPeso = 0;
  float eCuadrado = 0;
  float pCuadrado = 0;
  float exp = 0;

  for(int i=0; i<5; i++){
    mEdad += Estadistica[i][0];
    mPeso += Estadistica[i][1];
    eCuadrado += pow(Estadistica[i][0],2);
    pCuadrado += pow(Estadistica[i][1],2);
    exp += Estadistica[i][0] * Estadistica[i][1];
  }
  mEdad /= 5.0;
  mPeso /= 5.0;

  float DesEdad = sqrt((eCuadrado/5.0)-(pow(mEdad,2)));
  //float DesPeso = sqrt((pCuadrado/5.0)-(pow(mPeso,2)));
  float DesEyP = (exp/5.0)-(mEdad * mPeso);
  //float Coeficiente = (DesEyP / (DesEdad * DesPeso) * 100);

  //Variables de la formula final
  //Ecuacion de la recta -> y = ax + b
  float a = DesEyP / (pow(DesEdad,2));
  float b = mPeso - (a * mEdad);
  
  //Formula
  cout<<"Formula para calcular el peso segun la edad de la persona -> y = ax + b"<<endl;
  cout<<"Valor de a = "<<a<<endl;
  cout<<"Valor de b = "<<b<<endl;
  cout<<"Valor de x(edad de la persona) = "<<edad<<endl;

  //Calculo del peso segun la edad de la persona.
  cout<<"Peso de la persona segun su edad -> "<<a*edad + b<<" Kg."<<endl;
  this->peso = a*edad + b; //Asignamos el peso aproximado al atributo de la persona.
}

int main(){
  Persona p1;
  p1(6);
  Persona p2;
  p2(4);
  return 0;
}
