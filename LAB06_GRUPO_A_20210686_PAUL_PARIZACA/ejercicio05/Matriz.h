#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
  private:
    int matriz[3][3];
    int lista[9];
  public:
    Matriz();
    ~Matriz();
    bool seEncuentra(int);
    void buscarNumero();
    void mostrarMatriz();
    void generarMatriz();
};

#endif
