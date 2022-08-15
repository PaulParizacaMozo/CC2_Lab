
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

class C1{
  private:
    std::shared_ptr<Point> p;
  public:
    C1(std::shared_ptr<Point> value) : p(value) {}
    virtual ~C1() { cout << "\nC1 destructor\n"; }
    void print() const {
      cout << "\nValor X: " << (*p).getX();
      cout << "\nValor Y: " << (*p).getY()<<endl;
    }
};

class C2{
  private:
    std::shared_ptr<Point> p;
    std::weak_ptr<Point> amigo;
  public:
    C2(std::shared_ptr<Point> value) : p(value) {}
    virtual ~C2() { cout << "\nC2 destructor\n"; }
    void set_amigo(std::shared_ptr<Point> p){
      this->amigo = p;
    }
    void print() const {
      cout << "\nValor X: " << (*p).getX();
      cout << "\nValor Y: " << (*p).getY()<<endl;
    }
    void printAmigo() const{
      std::shared_ptr<Point> p_amigo = amigo.lock();
      cout<< " Valor de la clase amiga."<<endl;
      cout <<" Valor X: " << (*p_amigo).getX();
      cout <<"\n Valor Y: " << (*p_amigo).getY()<<endl;
    }
};

int main(){
  shared_ptr<Point>punto1 = std::make_shared<Point>(6.4, 7.4);
  shared_ptr<Point>punto2 = std::make_shared<Point>(2.2, 3.3);
  
  std::shared_ptr<C1> clase1 = std::make_shared<C1>(punto1);
  std::shared_ptr<C2> clase2 = std::make_shared<C2>(punto2);

  clase2->set_amigo(punto1); 

  clase1->print();
  clase2->print();
  clase2->printAmigo();

  return 0;
}


