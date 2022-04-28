#include <iostream>
using namespace std;

int main (){
  int contador=0;
  for(int i = 1; i <= 100; i++){
    if(i%5==0){
      cout<<"Multiplo numero "<<contador+1<<" -> "<<i<<endl;
      contador+=1;
    }
  }
  return 0;
}
