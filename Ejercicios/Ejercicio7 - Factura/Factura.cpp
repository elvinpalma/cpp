#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double Subtotal = 0;
    double Total = 0;
    double Impuesto = 0.15;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> Subtotal;

    //Proceso
    Total = Subtotal + (Subtotal * Impuesto);

    //Salida
    cout << endl;
    cout << "Total a pagar es: " << Total;
    cout << endl;

    return 0;
}
