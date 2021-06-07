#include <iostream>
#include <string>

using namespace std;

string Productos[5][3] = 
{
    {"001", "Iphone X", "0"},
    {"002", "Laptop Dell", "5"},
    {"003", "Monitor Samsung", "2"},
    {"004", "Mouse", "100"},
    {"005", "HeadSet", "25"},
};

void ListarProductos()
{
    system("cls");
    cout << endl;
    cout << "Listado de Productos" << endl;
    cout << "********************" << endl;
    cout << "Codigo, Descripcion y Existencia" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << Productos[i][0] << " | " << Productos[i][1] << " | " << Productos[i][2] << endl;
    }
}

void MovimientoInventario(string codigo, int cantidad, string tipoMovimiento)
{
    for (int i = 0; i < 5; i++)
    {
        if (Productos[i][0] == codigo)
        {
            if (tipoMovimiento == "+")
            {
                Productos[i][2] = to_string(stoi(Productos[i][2]) + cantidad);
            } 
            else
            {
                Productos[i][2] = to_string(stoi(Productos[i][2]) - cantidad);
            }
            
        }
    }
    
}

void IngresoDeInventario()
{
    string codigo = " ";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Ingreso de Productos al Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "+");
}

void SalidaDeProductos()
{
    string codigo = " ";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Salida de Productos del Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "-");
}

void AjusteNegativoDeInventario()
{
    string codigo = " ";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Ajuste Negativo del Inventario" << endl;
    cout << "******************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "-");
}

void AjustePositivoDeInventario()
{
    string codigo = " ";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Ajuste Positivo del Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "+");
}

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true)
    {
        system("cls");

        cout << "Sistema de inventario";
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        
        cout << "1 - Productos" << endl;
        cout << "2 - Ingreso de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "4 - Ajuste Negativo de Inventario" << endl;
        cout << "5 - Ajuste Positivo de Inventario" << endl;

        cout << "0 - Salir" << endl;
        cout << endl;

        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ListarProductos();          
            break;
            

        case 2:
            IngresoDeInventario();
            break;    
        
        case 3:
            SalidaDeProductos();
            break;

        case 4:
            AjusteNegativoDeInventario();
            break;

        case 5:
            AjustePositivoDeInventario();
            break;    
        
        default:
            break;
        }

        system("pause");

        cout << endl;

        if (opcion == 0)
        {
            break;
        }
        

    }
    
    return 0;
}
