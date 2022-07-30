#include <iostream>
using namespace std;

class WinFactory{
public:
	virtual ~WinFactory(){};
	virtual string Dibujar() const = 0;
};

class WinButton : public WinFactory{
  public:
	  string Dibujar() const override{
		  return "Dibujando Button Windows";
	  }
};

class WinCheckBox : public WinFactory{
  public:
	  string Dibujar() const override{
		  return "Dibujando CheckBox Windows";
	  }
};

class MacFactory{
  public:
	  virtual ~MacFactory(){};
	  virtual string Dibujar() const = 0;
	  virtual string Dibujar(const WinFactory& colaborador) const = 0;
};

class MacButton : public MacFactory{
  public:
	  string Dibujar() const override{
	  	return "Dibujando Button Mac";
	  }
	  string Dibujar(const WinFactory& colaborador) const override{
	  	const string result = colaborador.Dibujar();
	  	return result;
	  }
};

class MacCheckBox : public MacFactory{
  public:
	  string Dibujar() const override{
	  	return "Dibujando CheckBox Mac";
	  }
	  string Dibujar(const WinFactory& colaborador) const override{
	  	const string result = colaborador.Dibujar();
	  	return result;
	  }
};

class LinuxFactory{
  public:
	  virtual ~LinuxFactory(){};
	  virtual string Dibujar() const = 0;
	  virtual string Dibujar(const WinFactory& colaborador) const = 0;
};

class LinuxButton : public LinuxFactory{
  public:
	  string Dibujar() const override{
	  	return "Dibujando Button Linux";
	  }
	  string Dibujar(const WinFactory& colaborador) const override{
	  	const string result = colaborador.Dibujar();
	  	return result;
	  }
};

class LinuxCheckBox : public LinuxFactory{
  public:
	  string Dibujar() const override{
	  	return "Dibujando CheckBox Linux";
	  }
	  string Dibujar(const WinFactory& colaborador) const override{
	  	const string result = colaborador.Dibujar();
	  	return result;
	  }
};

class GUIFactory{
  public:
	  virtual WinFactory *crearControlW() const = 0;
	  virtual MacFactory *crearControlM() const = 0;
	  virtual LinuxFactory *crearControlL() const = 0;
};

class Button : public GUIFactory{
  public:
	  WinFactory *crearControlW() const override{
	  	return new WinButton();
	  }
	  MacFactory *crearControlM() const override{
	  	return new MacButton();
	  }
	  LinuxFactory *crearControlL() const override{
	  	return new LinuxButton();
	  }
};

class CheckBox : public GUIFactory{
  public:
	  WinFactory *crearControlW() const override{
	  	return new WinCheckBox();
	  }
	  MacFactory *crearControlM() const override{
	  	return new MacCheckBox();
	  }
	  LinuxFactory *crearControlL() const override{
	  	return new LinuxCheckBox();
	  }
};

void Application(const GUIFactory &f, int os){
	if (os==1){
		const WinFactory *Producto1 = f.crearControlW();
		cout<<endl<<Producto1->Dibujar()<<endl;
		delete Producto1;
	}
	else if (os==2){
		const MacFactory *Producto2 = f.crearControlM();
		cout<<endl<<Producto2->Dibujar()<<endl;
		delete Producto2;
	}
	else if (os==3){
		const LinuxFactory *producto_c = f.crearControlL();
		cout<<endl<<producto_c->Dibujar()<<endl;
		delete producto_c;
	}
	else if(os==4){
		const WinFactory *Producto1 = f.crearControlW();
		const MacFactory *Producto2 = f.crearControlM();
		cout<<endl<<Producto2->Dibujar(*Producto1)<<endl;
	}
} 
	
int main(){ 
	cout<<"\nCliente: Windows ";
	Button *Pwin = new Button();
	Application(*Pwin,1);
	delete Pwin;
	cout<<"\nCliente: Mac ";
	Button *Pmac = new Button();
	Application(*Pmac,2);
	delete Pmac;
	cout<<"\nCliente: Linux ";
	Button *Plinux= new Button();
	Application(*Plinux,3);
	delete Plinux;
	
	return 0;
}
