#include <stdio.h>
#include <iostream.h>
#include <conio.h>


using namespace std;
int main()
{
	char carnet[15];
	int edad;
	char nombre[20];
	char apellido[20];
	int nota;
	
	cout<<"puede ingresar su numero de carnet por favor"<<endl;
	cin>>carnet;
	
	cout<<"ingrese su edad por favor"<<endl;
	cin>>edad;
	
	cout<<"ingrese un nombre"<<endl;
	cin>>nombre;
	
	cout<<"ingrese un apellido"<<endl;
	cin>>apellido;
	
	cout>>"ingrese su nota de logistica por favor"<<endl;
	cin>>nota;
	
	cout<<"carnet es: "<<carnet<<" su edad es: "<<edad<<" su nombre es: "<<nombre<<" su nota es: "<<nota<<endl;
	getch();
	

}
