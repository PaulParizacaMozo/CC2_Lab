#include <iostream>
#include <memory>
using namespace std;

class C1{
  private:
    std::shared_ptr<double> d;
  public:
    C1(std::shared_ptr<double> value) : d(value) {}
    virtual ~C1() { cout << "\nC1 destructor\n"; }
    void print() const { cout << "Valor " << *d<<endl; }
};

class C2{
  private:
    std::shared_ptr<double> d;
    std::shared_ptr<C1> amigo;
  public:
    C2(std::shared_ptr<double> value) : d(value) {}
    virtual ~C2() { cout << "\nC2 destructor\n"; }
    void set_amigo(std::shared_ptr<C1> d){
      this->amigo = d;
    }
    void print() const { cout << "\nValor " << *d<<endl; }
};

int main(){
  shared_ptr<double>n1 = std::make_shared<double>(3.3);
  shared_ptr<double>n2 = std::make_shared<double>(4.5);
  
  std::shared_ptr<C1> clase1 = std::make_shared<C1>(n1);
  std::shared_ptr<C2> clase2 = std::make_shared<C2>(n2);

  clase2->set_amigo(clase1); 

  clase1->print();
  clase2->print();

  return 0;
}

