//Elvin Noé Palma Hernádez  20192001535

//Biblioteca a utilizar
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Datos de entrada
    float a = 0;
    float b = 0;
    float SumaResultado = 0;
    float RestaResultado = 0;
    float MultiplicacionResultado = 0;
    float DivisionResultado = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    //Proceso
    SumaResultado = a + b;
    RestaResultado = a - b;
    MultiplicacionResultado = a * b;
    DivisionResultado = a / b;

    cout << endl;

    //Salida
    cout << "La suma de a + b es: " << SumaResultado;
    cout << endl;
    cout << "La resta de a - b es: " << RestaResultado;
    cout << endl;
    cout << "La multiplicacion de a * b es: " << MultiplicacionResultado;
    cout << endl;
    cout << "La division de a / b es: " << DivisionResultado;
    cout << endl;
	
	return 0;
}