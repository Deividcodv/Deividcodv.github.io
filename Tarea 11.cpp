#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char nombre[15];
    char apellido[20];
    int DPI;
    int edad;
    int nota;
    int nota2;
    int nota3;
    float total;
    

    cout << "Por favor, ingrese su nombre: " << endl;
    cin >> nombre;

    cout << "Por favor, ingrese su apellido: " << endl;
    cin >> apellido;
    
	cout << "Por favor, ingrese su numero de DPI: " << endl;
    cin >> DPI;

    cout << "Por favor, ingrese su edad: " << endl;
    cin >> edad;

   
    
    std: :cout << "Por favor, ingrese su nota del primer parcial: \n" << endl;
    cin >> nota;
     
	cout << "Por favor, ingrese su nota del segundo parcial: " << endl;
    cin >> nota2;
    
    nota3 = nota + nota2;


    cout << ", su nombre es: " << nombre << ", su apellido es: " << apellido << " su DPI es: " << DPI <<  ", su edad es: " << edad << ", su nota del primer parcial es:" << nota << ", su nota del segundo parcial es:"<< nota2 << ", la suma de sus notas es: " << nota3 << ", y su total del curso es: " << total << endl;

    getch();
    return 0;
}
