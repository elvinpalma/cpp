//Elvin Noé Palma Hernández 20192001535

//Bibliotecas a utilizar
#include <iostream>
#include "startShip.h"
#include "snake.h"

//Establecer std
using namespace std;

//Se  inicia programa para el menú de juegos
int main(int argc, char const *argv[])
{
    //Variables a utilizar
    int opcion = 0;
    bool salir = false;

    //Iniciar ciclo while para consultar que juego quiere seleccionar
    while(salir == false)
    {
        //Comando para limpiar la pantalla
        system("cls");

        //Mensaje del menú de jugos
        cout << endl;
        cout << "******************";
        cout << endl;
        cout << "  MENU DE JUEGOS  ";
        cout << endl;
        cout << "******************";
        cout << endl;
        cout << endl;

        //Mensaje solicitando que se ingrese un juego
        cout << "Por favor seleccione un juego";
        cout << endl;
        cout << endl;

        //Mensaje mostrando los juegos que se desean jugar
        cout << "1) - StarShip" << endl;
        cout << "2) - Snake" << endl;

        //Esta opción es para salir del menú de juegos
        cout << "0) - Salir del menu de juegos";
        cout << endl;
        cout << endl;

        //Mensaje solicitando que seleccione un juego
        cout << "Por favor ingrese el numero del juego que desea jugar: ";
        cin >> opcion;

        //Según se ejecutará el juego de la opción seleccionada
        switch (opcion)
        {
        case 1:
            system("cls");
            starShip();
            break;
        
        case 2:
            system("cls");
            snake();
            break;
        
        default:
            break;
        }

        cout << endl;
        cout << endl;

        //Comando para pausar el programa
        system("pause");

        //Comando para salto de línea
        cout << endl;

        //Si la opción es 0 entonces el programa del menú de juegos
        if (opcion == 0)
        {
            system("cls");
            break;
        }

        //Si se presiona una opción diferente a las que se presentarón entonces esta parte del programa se ejecutará        
        if (salir == false)
        {
            //Esta es la variable la cual nos permitirá continuar o terminar con el programa
            char continuar = 'n';
            //Comienza otro cliclo while
            while (true)
            {
                //Comando para limpiar la pantalla
                system("cls");

                //Mensaje solicitando si se desea seguir buscando el juego
                cout << endl;
                cout << "*********";
                cout << endl;
                cout << "  Error  ";
                cout << endl;
                cout << "*********";
                cout << endl;
                cout << endl;
                cout << "*******************************************";
                cout << endl;
                cout << "No se encontro el juego que estaba buscando";
                cout << endl;
                cout << "*******************************************";
                cout << endl;
                cout << endl;
                cout << "************************************************";
                cout << endl;
                cout << "Presione s si desea continuar o n si desea salir";
                cout << endl;
                cout << "************************************************";
                cout << endl;
                cout << endl;
                cout << "***************************";
                cout << endl;
                cout << "¿Desea continuar?: ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S')
                {
                    break;
                }
                else
                    if(continuar == 'n' || continuar == 'N')
                    {
                        system("cls");
                        salir = true;
                        break;
                    }
                
            }
        
        }
            
    }
    
    //Finalizar programa
    return 0;
}
