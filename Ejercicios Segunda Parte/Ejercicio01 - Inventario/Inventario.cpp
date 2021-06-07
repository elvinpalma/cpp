//Elvin Noé Palma Hernández  20192001535

//Bibliotecas a utilizar
#include <iostream>
#include <string>

//Establecer std
using namespace std;

//Lista de productos que estan en el inventario
string Productos[5][3] = 
{
    {"001", "Iphone X", "0"},
    {"002", "Laptop Dell", "5"},
    {"003", "Monitor Samsung", "2"},
    {"004", "Mouse", "100"},
    {"005", "HeadSet", "25"},
};

//Función donde se muestra la lista de productos que están en el inventario
void ListarProductos()
{
    //Comando para limpiar la pantalla
    system("cls");
    cout << endl;
    //Mensaje mostrando los productos del inventario
    cout << "Listado de Productos" << endl;
    cout << "********************" << endl;
    cout << "Codigo, Descripcion y Existencia" << endl;

    //Ciclo for para mostrar el inventario
    for (int i = 0; i < 5; i++)
    {
        cout << Productos[i][0] << " | " << Productos[i][1] << " | " << Productos[i][2] << endl;
    }
}

//Función donde se hacen los calculos correspondientes con respecto a la cantidad de productos
void MovimientoInventario(string codigo, int cantidad, string tipoMovimiento)
{
    //Ciclo donde se están haciendo los diferentes movimientos en el inventario
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

//Función donde se le aumenta los ingresos a la cantidad de productos al inventario
void IngresoDeInventario()
{
    //Variables a utilizar
    string codigo = " ";
    int cantidad = 0;

    //Comando para limpiar la pantalla
    system("cls");
    cout << endl;
    //Mensaje para ingresar productos del inventario
    cout << "Ingreso de Productos al Inventario" << endl;
    cout << "**********************************" << endl;
    //Mensaje solicitando el código del producto
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    //Mensaje solicitando  la canitdad de producto a ingresar
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    //Esta función hará que los movimientos del inventario sean positivo
    MovimientoInventario(codigo, cantidad, "+");
}

//Función donde se le resta todas las salidas a la cantidad de productos del inventario
void SalidaDeProductos()
{
    //Variables a utilizar
    string codigo = " ";
    int cantidad = 0;

    //Comando para limpiar la pantalla
    system("cls");
    cout << endl;
    //Mensaje para indicar las salidas de los productos del inventario
    cout << "Salida de Productos del Inventario" << endl;
    cout << "**********************************" << endl;
    //Mensaje solicitando el código del producto
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    
    //Mensaje solicitando  la canitdad de producto a ingresar
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    //Esta función hará que los movimientos del inventario sean negativo
    MovimientoInventario(codigo, cantidad, "-");
}

//Función donde se hacen los ajustes negativos, lo cual es restar la cantidad de productos del inventario
void AjusteNegativoDeInventario()
{
    //Variables a utilizar
    string codigo = " ";
    int cantidad = 0;

    //Comando para limpiar la pantalla
    system("cls");
    cout << endl;
    //Mensaje para indicar los ajustes negativos del inventario
    cout << "Ajuste Negativo del Inventario" << endl;
    cout << "******************************" << endl;
    //Mensaje solicitando el código del producto
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    //Mensaje solicitando  la canitdad de producto a ingresar
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    //Esta función hará que los movimientos del inventario sean negativo
    MovimientoInventario(codigo, cantidad, "-");
}

//Función donde se hacen los ajustes positivos, lo cual  es sumar la cantidad de productos del inventario
void AjustePositivoDeInventario()
{
    //Variables a utilizar
    string codigo = " ";
    int cantidad = 0;

    //Comando para limpiar la pantalla
    system("cls");
    cout << endl;
    //Mensaje para indicar los ajustes positivos del inventario
    cout << "Ajuste Positivo del Inventario" << endl;
    cout << "**********************************" << endl;
    //Mensaje solicitando el código del producto
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;

    //Mensaje solicitando  la canitdad de producto a ingresar
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    //Esta función hará que los movimientos del inventario sean positivo
    MovimientoInventario(codigo, cantidad, "+");
}

//Inicia el programa principal, donde se mostrará el menu principal del sistema de inventario
int main(int argc, char const *argv[])
{
    //Varible a utilizar
    int opcion = 0;

    //Inicia ciclo while
    while (true)
    {
        //Comando para limpiar la pantalla
        system("cls");

        //Mensaje del sistema de inventario
        cout << "Sistema de inventario";
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        
        //Son las diferentes opciones que se muestran en el menú principal
        cout << "1 - Productos" << endl;
        cout << "2 - Ingreso de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "4 - Ajuste Negativo de Inventario" << endl;
        cout << "5 - Ajuste Positivo de Inventario" << endl;

        //Esta opción es para salir del menú  principal
        cout << "0 - Salir" << endl;
        cout << endl;

        //Mensaje 
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        //Según la opción seleccionada se  trabajará con una de estas opciones
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

        ///Comando para pausar el programa
        system("pause");

        //Comando para salto de línea
        cout << endl;

        //Si la opción seleccionada  es 0 entonces el programa sale del menú principal
        if (opcion == 0)
        {
            break;
        }
        

    }
    
    //Finalizar programa
    return 0;
}
