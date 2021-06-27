//Elvin Noé Palma Hernádez  20192001535

//Biblioteca a utilizar
#include <iostream>

//Establecer std
using namespace std;

int main(int argc, char** argv) 
{
	//Datos de entrada
    double Subtotal = 0;
    double Total = 0;
    double Impuesto = 0.15;
    int Descuento = 0;
    double CalculoDescuento = 0;
    double CalculoImpuesto = 0;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> Subtotal;
    
    cout << endl;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> Descuento;
    cout << endl;

    //Proceso
    CalculoDescuento = (Subtotal * Descuento) / 100;

        cout << endl;
    char Exenta = ' ';
    cout << "Factura exenta?";
    cout << endl;
    cout << "Encriba s / n: ";
    cin >> Exenta;

    if (Exenta == 's' || Exenta == 'S')
    {
        CalculoImpuesto = 0;
    }
    else
        if (Exenta == 'n' || Exenta == 'N')
        {
            CalculoImpuesto = (Subtotal - CalculoDescuento) * Impuesto;
        }

    Total = Subtotal - CalculoDescuento + CalculoImpuesto;

    //Salida
    cout << endl;
    cout << "Total a pagar es: " << Total;
    cout << endl;
    
    //Finalizar programa
	return 0;
}