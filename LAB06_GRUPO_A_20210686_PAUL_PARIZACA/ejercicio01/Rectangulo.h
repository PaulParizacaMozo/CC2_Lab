#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo{
  private: 
    int largo;
    int ancho;
    int area;
    int perimetro;
  public:
    Rectangulo(int,int);
    ~Rectangulo();
    void setLargo(int);
    void setAncho(int);
    void CalcularPerimetro();
    void CalcularArea();
    int getArea();
    int getPerimetro();
};

#endif


