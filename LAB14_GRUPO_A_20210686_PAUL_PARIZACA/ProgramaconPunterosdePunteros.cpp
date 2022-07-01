#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void crearMatriz(string** &matriz,int filas, int columnas){
  matriz=new string*[filas];
  for(int i=0; i<filas; i++){
    matriz[i] = new string[columnas];
  }
}

void insertarElemento(string** matriz, int fila){
  string codigo;
  string nombre;
  string precio;
  string stock;
  cout<<" Ingrese el codigo del nuevo producto-> ";
  cin>>codigo;
  matriz[fila][0]= codigo;
  cout<<" Ingrese el nombre del nuevo producto-> ";
  cin>>nombre;
  matriz[fila][1]= nombre;
  cout<<" Ingrese el precio del nuevo producto-> ";
  cin>>precio;
  matriz[fila][2]= precio;
  cout<<" Ingrese el stock del nuevo producto-> ";
  cin>>stock;
  matriz[fila][3]= stock;
  cout<<" -Producto ingresado con exito-"<<endl;
}

void eliminarMatriz(string** &matriz, int filas){
  for(int i=0; i<filas; i++)
    delete [] matriz[i];
  delete [] matriz;
}

//Ejercicio01
void agregarProducto(string** &tabla, string** &copia, int &filas, int columnas){
  filas += 1;
  crearMatriz(copia,filas,columnas);
  for(int i=0; i<filas-1; i++){
    for(int j=0; j<columnas; j++){
      copia[i][j]=tabla[i][j];
    }
  }
  insertarElemento(copia,filas-1);
  eliminarMatriz(tabla,filas-1);
  crearMatriz(tabla,filas,columnas);
  for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
      tabla[i][j]=copia[i][j];
    }
  }
  eliminarMatriz(copia,filas);
}

//Ejercicio02
bool buscarID(string elemento,vector<string>ElementoDadosDeBaja,int filas,int columnas){
  int tamanio = ElementoDadosDeBaja.size();
  for(int j=0; j<tamanio; j++){
    if(elemento==ElementoDadosDeBaja[j]){
      return true;
    }
  }
  return false;
}

void mostrarMatriz(string** matriz, vector<string>ElementoDadosDeBaja,int filas, int columnas){
  int identador=0;
  cout<<"|codigo   |nombre         |precio    |stock"<<endl;
  cout<<"-------------------------------------------"<<endl;
  for(int i=0;i<filas;i++){
    if(buscarID(matriz[i][0],ElementoDadosDeBaja,filas,columnas)==false){
      for(int j=0;j<columnas;j++){
        if(j==1){
           cout<<setw(identador)<<"|"<<*(*(matriz+i)+j)<<"\t";
        }
        else{
          cout<<setw(identador)<<"|"<<*(*(matriz+i)+j)<<"\t";
          identador+=3;
        }
      }
      identador=0;
      cout<<"\n";
      cout<<"-------------------------------------------"<<endl;
    }
  }
}

//Ejercicio03
void buscarProducto(string** matriz,vector<string>ElementoDadosDeBaja,int filas,int columnas){
  int indice;
  bool seEncontro=false;
  string nombre;
  cout<<"Ingrese el id o nombre del producto que desea buscar: ";
  cin>>nombre;
  for(int i=0;i<filas;i++){
    if(buscarID(matriz[i][0],ElementoDadosDeBaja,filas,columnas)==false){
      for(int j=0;j<columnas-2;j++){
        if(matriz[i][j]==nombre){
          indice=i;
          seEncontro=false;
        }
      }
    }
  }
  if(seEncontro==false){
    int identador=0;
    cout<<"|codigo   |nombre         |precio    |stock"<<endl;
    cout<<"-------------------------------------------"<<endl;
    for(int i=0;i<columnas;i++){
      if(i==1){
         cout<<setw(identador)<<"|"<<*(*(matriz+indice)+i)<<"\t";
      }
      else{
        cout<<setw(identador)<<"|"<<*(*(matriz+indice)+i)<<"\t";
        identador+=3;
      }
    }
    cout<<"\n";
    cout<<"-------------------------------------------"<<endl;
  }
}

//Ejercicio04
void modificarProducto(string** matriz,vector<string>ElementoDadosDeBaja,int filas,int columnas){
  int indice;
  bool seEncontro=false;
  string nombre;
  
  cout<<"Ingrese el id o nombre del producto a modificar-> ";
  cin>>nombre;
  for(int i=0;i<filas;i++){
    if(buscarID(matriz[i][0],ElementoDadosDeBaja,filas,columnas)==false){
      for(int j=0;j<columnas-2;j++){
        if(matriz[i][j]==nombre){
          indice=i;
          seEncontro=false;
        }
      }
    }
  }
  if(seEncontro==false){
    bool salir=false;
    int opcion;
    while(salir==false){
      cout<<" MENU DE MODIFICAR UN PRODUCTO"<<endl;
      cout<<" 1.- Modificar nombre\n 2.- Modificar precio\n 3.- Modificar stock\n 4.- Salir"<<endl;
      cout<<" Ingrese una opcion-> ";
      cin>>opcion;
      switch(opcion){
        case 1:{
          string nomAux;
          cout<<"  Ingrese el nuevo nombre del producto-> ";
          cin>>nomAux;
          matriz[indice][1]=nomAux;
          break;
        }
        case 2:{
          string precioAux;
          cout<<"  Ingrese el nuevo precio del producto-> ";
          cin>>precioAux;
          matriz[indice][2]=precioAux;
          break;
        }
        case 3:{
          string stock;
          cout<<"  Ingrese el nuevo stock del producto-> ";
          cin>>stock;
          matriz[indice][3]=stock;
          break;
        }
        case 4:
          salir = true;
          break;
      }
    }
  }
}

int main(){
  string** tabla;
  string** copia;
  int filas;
  int columnas=4;
  vector<string>ElementoDadosDeBaja(0);

  cout<<"Ingrese el numero de productos iniciales-> ";
  cin>>filas;
  crearMatriz(tabla,filas,columnas);
  for(int i=0; i<filas; i++){
    cout<<"Producto "<<i+1<<": "<<endl;
    insertarElemento(tabla,i);
  }
  
  bool salir=false;
  int opcion;
  while(salir==false){
    cout<<"\n****MENU DE PRODUCTOS****"<<endl;
    cout<<"1.- Ingresar un nuevo producto\n2.- Dar de baja un producto\n3.- Buscar un producto\n4.- Modificar nombre,precio o stock\n5.- Mostrar tabla de productos\n6.- Salir"<<endl;
    cout<<"Ingrese una opcion-> ";
    cin>>opcion;
    cout<<endl;
    switch(opcion){
      case 1: //Ejercicio 01
        agregarProducto(tabla,copia,filas,columnas);
        break;
      case 2:{ //Ejercicio 02
        string Debaja;
        cout<<"Ingrese el id del producto a dar de baja-> ";
        cin>> Debaja;
        ElementoDadosDeBaja.push_back(Debaja);
        cout<<"Elemento dado de baja con exito."<<endl;
        break;
      }
      case 3: //Ejercicio 03
        buscarProducto(tabla,ElementoDadosDeBaja,filas,columnas);
        break;
      case 4: //Ejercicio 04
        modificarProducto(tabla,ElementoDadosDeBaja,filas,columnas);
        break;
      case 5:
        mostrarMatriz(tabla,ElementoDadosDeBaja,filas,columnas);
        break;
      case 6:
        salir = true;
        break;
    }
  }
  return 0;
}
