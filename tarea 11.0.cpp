#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char Nombre[15];
    char Apellido[20];
    string DPI;
    int Edad;
    int Nota;
    int Nota2;
    int Nota3;
    float Promedio = 0;
    

    cout << "Por favor, ingrese su nombre: " << endl;
    cin >> Nombre;

    cout << "Por favor, ingrese su apellido: " << endl;
    cin >> Apellido;
    
	cout << "Por favor, ingrese su numero de DPI: " << endl;
    cin >> DPI;

    cout << "Por favor, ingrese su edad: " << endl;
    cin >> Edad;

   cout << "Por favor, ingrese su nota del primer parcial: " << endl;
    cin >> Nota;
     
	cout << "Por favor, ingrese su nota del segundo parcial: " << endl;
    cin >> Nota2;
    
    Nota3 = Nota + Nota2;
    Promedio = Nota / 2.0;

//Para que se mire mejor a la hora de ejecutar el programa 

    cout << " Su nombre es: " << Nombre << endl;
	cout << " Su apellido es: " << Apellido << endl;
	cout << " Su DPI es: " << DPI <<  endl;
	cout << " Su edad es: " << Edad << endl;
	cout << " Su nota del primer parcial es:" << Nota << endl;
	cout << " Su nota del segundo parcial es:" << Nota2 << endl;
	cout << " El total de sus notas es: " << Nota3 << endl;
	cout << " Su promedio es: " << Promedio << endl;

    getch();
    return 0;
}
