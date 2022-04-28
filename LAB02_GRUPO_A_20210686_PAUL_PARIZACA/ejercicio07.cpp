#include <iostream>
using namespace std;

void Promedio(int **matriz, int Nfila){
  int sumaP=0;
  for (int i=0; i<3; i++) {	
    sumaP+=matriz[Nfila][i];
  }
  cout<<"El promedio del estudiante "<<Nfila+1<<" es -> "<<sumaP/3.0<<endl;
}

void LLenadoDatos(int **matriz, int Nfila){
  for (int i=0; i<3; i++) {	
    cout<<"  Ingrese la nota "<<i+1<<" -> ";
    cin>>matriz[Nfila][i];
  }
}

int main(){
  int CantEstudiantes;
  int **matriz;
  cout<<"Ingrese la cantidad de estudiantes -> ";
  cin>>CantEstudiantes;
  matriz= new int*[CantEstudiantes];
  for (int i=0; i<CantEstudiantes; i++){
    matriz[i]=new int(3);
  }
  for (int i=0;i<CantEstudiantes;i++){
    cout<<" Ingrese las notas del estudiantes "<<i+1<<endl;
    LLenadoDatos(matriz,i);
  }
  cout<<endl;
  for (int i=0;i<CantEstudiantes;i++){
    Promedio(matriz,i);
  }

  for(int i=0; i<CantEstudiantes;i++){
    delete[] matriz[i];
  }
  delete[] matriz;

  return 0;
}
