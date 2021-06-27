//Elvin Noé Palma Hernádez  20192001535

//Biblioteca a utilizar
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Datos de entrada
    int a = 0;
    int b = 0;
    int SumaResultado = 0;
    int RestaResultado = 0;
    int MultiplicacionResultado = 0;
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