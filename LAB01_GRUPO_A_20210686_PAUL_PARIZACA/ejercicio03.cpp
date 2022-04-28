#include <iostream>
using namespace std;

int main (){
  int HH,MM,aumento,horaAMPM;
  string formato;
  cout<<"Ingrese la hora(HH) -> ";
  cin>>HH;
  cout<<"Ingrese los minutos(MM) -> ";
  cin>>MM;
  cout<<"La hora ingresada es -> "<<HH<<':'<<MM<<endl;
  cout<<"Aumento -> ";
  cin>>aumento;
  MM+=aumento;
  int minutos=aumento/60;
  if(MM>=60){
    if(minutos!=0){
      MM-=60*minutos;
      HH+=minutos;
    }
    else{
      MM-=60;
      HH+=1;
    }
  }
  if(HH>=24){
    HH-=24;
  }
  cout<<"HORA FINAL en formato HH:MM -> "<<HH<<':'<<MM<<endl;
  if(HH>12){
    horaAMPM=HH-12;
  }
  if(HH<12){
    cout<<"HORA FINAL en formato AM/PM -> "<<HH<<':'<<MM<<" AM"<<endl;
  }
  else{
    cout<<"HORA FINAL en formato AM/PM -> "<<horaAMPM<<':'<<MM<<" PM"<<endl;
  }
  return 0;
}
