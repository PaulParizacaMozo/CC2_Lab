#include <iostream>
#include <memory>
using namespace std;

class Point{
  private: //atributos
    float x;
    float y;
  public: //Metodos
    Point(float,float);
    void X(float);
    void Y(float);
    float getX();
    float getY();
};

Point::Point(float x, float y){
  this->x = x;
  this->y = y;
}
void Point::X(float x){
  this->x = x;
}
void Point::Y(float y){
  this->y = y;
}
float Point::getX(){
  return x;
}
float Point::getY(){
  return y;
}

int main(){
  double* d = new double(1.0); //Se crea una variable de tipo puntero double y se separa memoria haciendo uso del new.
  Point* pt = new Point(1.0, 2.0); //Se crea un objeto de tipo puntero Point y se separa memoria haciendo uso del new.
  *d = 2.0; //Al puntero desreferenciado se le asigna nuevo valor (2.0)
  (*pt).X(3.0); // Usando el puntero desreferenciado llama al metodo X para asignar un nuevo valor.
  (*pt).Y(3.0); // Usando el puntero desreferenciado llama al metodo Y para asignar un nuevo valor.

  pt->X(4.0); //Siendo un puntero sin desreferenciar es necesario usar -> para llamar al metodo X y asignar un nuevo valor.
  pt->Y(2.0); //Siendo un puntero sin desreferenciar es necesario usar -> para llamar al metodo Y y asignar un nuevo valor.

  delete d; //Liberamos espacio en la memoria.
  delete pt; //Liberamos espacio en la memoria.
  
  return 0;
}
