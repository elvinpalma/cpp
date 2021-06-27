#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
    
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> Descuento;

    //Proceso
    CalculoDescuento = (Subtotal * Descuento) / 100;
    CalculoImpuesto = (Subtotal - CalculoDescuento) * Impuesto;
    Total = Subtotal - CalculoDescuento + CalculoImpuesto;

    //Salida
    cout << endl;
    cout << "Total a pagar es: " << Total;
    cout << endl;
    
	return 0;
}
