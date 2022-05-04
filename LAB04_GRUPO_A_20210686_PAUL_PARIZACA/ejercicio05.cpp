#include <iostream>
using namespace std;
int codigo=1;

void AgregarProducto(string productos[][3],int id){
  cout<<" Ingrese el nombre del producto -> ";
  getline(cin,productos[id][0]);
  cout<<" Ingrese el precio del producto -> ";
  getline(cin,productos[id][1]);
  cout<<" Ingrese el stock del producto -> ";
  getline(cin,productos[id][2]);
}

void AltaProducto(string productos[][3]){
  if(codigo<=10){
    AgregarProducto(productos,codigo-1);
    codigo++;
  }
  else{
    char opcion;
    cout<<"Ya se alcanzo el limite de los 10 productos. Si desea reemplazar un producto anterior ingrese 'y' (y/n) -> ";
    cin>>opcion;
    cin.ignore();
    if (opcion=='y'){
      string nombre;
      cout<<" ->Ingrese el nombre del producto a reemplazar -> ";
      getline(cin,nombre);
      for (int i=0; i<10; i++){
	if(nombre==productos[i][0]){
	  cout<<" ->Se encontro el producto, Ingrese los nuevos datos"<<endl;
	  AgregarProducto(productos,i); 
	}
      }
    }
    else {
      cout<<" ->No se modificara ningun dato."<<endl;
    }
  }
}

void MostrarTabla(string productos[][3]){
  cout<<"\n|Producto\t\t|Precio\t\t|Stock"<<endl;
  cout<<"-----------------------------------------------"<<endl;
  for (int i=0; i<10; i++){
    cout<<"|"<<productos[i][0];
    if(productos[i][0].size()<7){
      cout<<"\t";
    }
    cout<<"\t\t|"<<productos[i][1]<<"\t\t|"<<productos[i][2]<<endl;
    cout<<"-----------------------------------------------"<<endl;
  }
}

void BuscarProducto(string productos[][3]){
  string nombre;
  bool seEncontro=false;
  cout<<"Ingrese el nombre del producto a buscar -> ";
  getline(cin,nombre);
  for (int i=0; i<10; i++){
    if(nombre==productos[i][0]){
      cout<<"\n|Producto\t\t|Precio\t\t|Stock"<<endl;
      cout<<"-----------------------------------------------"<<endl;
      cout<<"|"<<productos[i][0];
      if(productos[i][0].size()<7){
        cout<<"\t";
      }
      cout<<"\t\t|"<<productos[i][1]<<"\t\t|"<<productos[i][2]<<endl;
      cout<<"-----------------------------------------------"<<endl;
      seEncontro=true;
    }
  }
  if(seEncontro==false){
    cout<<"No se encontro el producto."<<endl;
  }
}

void ModificarStock(string productos[][3]){
  string nombre,stock;
  cout<<" Ingrese el nombre del producto a modificar el stock -> ";
  getline(cin,nombre);
  for (int i=0; i<10; i++){
    if(nombre==productos[i][0]){
      cout<<" ->Se encontro el producto, Ingrese el nuevo stock del producto -> ";
      getline(cin,stock);
      productos[i][2]=stock;
    }
  }
}

void ModificarPrecio(string productos[][3]){
  string nombre,precio;
  cout<<" Ingrese el nombre del producto a modificar el precio -> ";
  getline(cin,nombre);
  for (int i=0; i<10; i++){
    if(nombre==productos[i][0]){
      cout<<" ->Se encontro el producto, Ingrese el nuevo precio del producto -> ";
      getline(cin,precio);
      productos[i][1]=precio;
    }
  }
}

int main(){
  string productos[10][3];
  int opcion;
  bool opt=true;
  while (opt==true){
    cout<<"\nOPCIONES"<<endl;
    cout<<"1.- Agregar Producto"<<endl;
    cout<<"2.- Modificar Stock"<<endl;
    cout<<"3.- Modificar Precio"<<endl;
    cout<<"4.- Buscar Producto"<<endl;
    cout<<"5.- Mostrar tabla de productos"<<endl;
    cout<<"6.- Salir"<<endl;
    cout<<"Ingrese una opcion -> ";
    cin>>opcion;
    cin.ignore();
    switch(opcion){
      case 1:
	AltaProducto(productos);
	break;
      case 2:
	ModificarStock(productos);
	break;
      case 3:
	ModificarPrecio(productos);
	break;
      case 4:
	BuscarProducto(productos);
	break;
      case 5:
	MostrarTabla(productos);
	break;
      case 6:
	opt=false;
	break;
    }
  }
  return 0;
}
