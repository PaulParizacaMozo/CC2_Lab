#include <iostream>
using namespace std;

class Puerta{
  public:
    string color;
    Puerta(){
      color="";
    }
};

class Llantas{
  public:
    string color;
    Llantas(){
      color="";
    }
};

class Timon{
  public:
    string color;
    Timon(){
      color="";
    }
};

class Asientos{
  public:
    string color;
    Asientos(){
      color="";
    }
};

class Motor{
  public:
    string color;
    Motor(){
      color="";
    }
};

class Espejos{
  public:
    string color;
    Espejos(){
      color="";
    }
};

class Vidrios{
  public:
    string color;
    Vidrios(){
      color="";
    }
};

class Carroceria{
  public:
    string color;
    Carroceria(){
      color="";}
};

class Automovil{
  public:
    Puerta puerta;
    Llantas llantas;
    Timon timon;
    Asientos asientos;
    Motor motor;
    Espejos espejos;
    Vidrios vidrios;
    Carroceria carroceria;
    //Metodos
  public:
    void verAuto(){
      cout<<"\nInformacion del Auto:"<<endl;
      if(puerta.color != ""){
        cout<<" Incluye puerta de color -> "<<puerta.color<<"."<<endl;
      }
      if(llantas.color != ""){
        cout<<" Incluye llantas de color -> "<<llantas.color<<"."<<endl;
      }
      if(timon.color != ""){
        cout<<" Incluye timon de color -> "<<timon.color<<"."<<endl;
      }
      if(asientos.color != ""){
        cout<<" Incluye asientos de color -> "<<asientos.color<<"."<<endl;
      }
      if(motor.color != ""){
        cout<<" Incluye motor de color -> "<<motor.color<<"."<<endl;
      }
      if(espejos.color != ""){
        cout<<" Incluye espejos de color -> "<<espejos.color<<"."<<endl;
      }
      if(vidrios.color != ""){
        cout<<" Incluye vidrios de color -> "<<vidrios.color<<"."<<endl;
      }
      if(carroceria.color != ""){
        cout<<" Incluye carroceria de color -> "<<carroceria.color<<"."<<endl;
      }
    }
};

class Builder {
  public:
    ~Builder(){};
    virtual void AddPuerta() = 0;
    virtual void AddLlantas() = 0;
    virtual void AddTimon() = 0;
    virtual void AddAsientos() = 0;
    virtual void AddMotor() = 0;
    virtual void AddEspejos() = 0;
    virtual void AddVidrios() = 0;
    virtual void AddCarroceria() = 0;
};

class BuilderEspecifico : public Builder{
  private: 
    Automovil* automovil;
  public:
    BuilderEspecifico(){
      this->Nuevo();
    }
    ~BuilderEspecifico(){
      delete automovil;
    }
    void Nuevo(){
      this->automovil = new Automovil();
    }
    void AddPuerta()override{
      string color;
      cout<<" Ingrese un color para la puerta: ";cin>>color;
      this->automovil->puerta.color = color;
    }
    void AddLlantas()override{
      string color;
      cout<<" Ingrese un color para las llantas: ";cin>>color;
      this->automovil->llantas.color = color;
    }
    void AddTimon()override{
      string color;
      cout<<" Ingrese un color para el timon: ";cin>>color;
      this->automovil->timon.color = color;
    }
    void AddAsientos()override{
      string color;
      cout<<" Ingrese un color para los asientos: ";cin>>color;
      this->automovil->asientos.color = color;
    }
    void AddMotor()override{
      string color;
      cout<<" Ingrese un color para el Motor: ";cin>>color;
      this->automovil->motor.color = color;
    }
    void AddEspejos()override{
      string color;
      cout<<" Ingrese un color para los espejos: ";cin>>color;
      this->automovil->espejos.color = color;
    }
    void AddVidrios()override{
      string color;
      cout<<" Ingrese un color para los vidrios: ";cin>>color;
      this->automovil->vidrios.color = color;
    }
    void AddCarroceria()override{
      string color;
      cout<<" Ingrese un color para la carroceria: ";cin>>color;
      this->automovil->carroceria.color = color;
    }
    Automovil* GetAutomovil(){
      Automovil* autofinal = automovil;
      this->Nuevo();
      return autofinal;
    }
};

class Director{
  private:
    Builder* builder;
  public:
    void setBuilder(Builder* builder){
      this->builder = builder;
    }
    void BuildNewAuto(){
      string aux;
      bool salir = false;
      int opt;
      while(salir == false){
        cout<<"\nMenu de creacion de auto"<<endl;
        cout<<"1.-Agregar Puertas.\n2.-Agregar Llantas\n3.-Agregar Timon\n4.-Agregar Asientos\n5.-Agregar Motor\n6.-Agregar Espejos\n7.-Agregar Vidrios\n8.-Agregar Carroceria\n0.- Salir"<<endl;
        cout<<"Ingrese una opcion -> ";cin>>opt;
        switch(opt){
          case 1:
            this->builder->AddPuerta();
            break;
          case 2:
            this->builder->AddLlantas();
            break;
          case 3:
            this->builder->AddTimon();
            break;         
          case 4:
            this->builder->AddAsientos();
            break;
          case 5:
            this->builder->AddMotor();
            break;
          case 6:
            this->builder->AddEspejos();
            break;
          case 7:
            this->builder->AddVidrios();
            break;
          case 8:
            this->builder->AddCarroceria();
            break;
          case 0:
            salir = true;
            break;
        }
      }
    }
};

void Cliente(Director& director){
  BuilderEspecifico* builder = nullptr;
  bool salir = false;
  int opt;

  while(salir == false){
    cout<<"\nMENU"<<endl;
    cout<<"1.- Crear Auto Nuevo"<<endl;
    cout<<"0.- Salir"<<endl;
    cout<<"Ingrese una opcion-> ";cin>>opt;
    switch(opt){
      case 1:{
        builder = new BuilderEspecifico();
        director.setBuilder(builder);
        director.BuildNewAuto();
        Automovil* automovil = builder->GetAutomovil();
        automovil->verAuto();
        delete automovil;
        break;
       }
      case 0:
        salir = true;
        break;
    }
  }
}

int main(){
  Director* director = new Director();
  Cliente(*director);
  delete director;
  return 0;
}
