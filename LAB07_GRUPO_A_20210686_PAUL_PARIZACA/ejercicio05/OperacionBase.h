#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H

class OperacionBase{
  private:
    int operador;
  public:
    OperacionBase();
    OperacionBase(int);
    void setOperador(int);
    int getOperador();
    ~OperacionBase();
};

#endif
