//Elvin Noé Palma Hernández  20192001535

//Bibliotecas a utilizar
#include <iostream>
#include <algorithm>
#include <time.h>

//Establecer std
using namespace std;

//Se determina cuantas filas y cuantas columnas se pueden utilizar
string Libros[10][3];

//Función donde están los datos de los libros
void CargarLibros()
{
    //Arreglo con categoría, descripción y nombre de autor o autores
    Libros[0][0] = "Algoritmos"; Libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; Libros[0][2] = "Bill Gate";
	Libros[1][0] = "Algoritmos"; Libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; Libros[1][2] = "Programacion en Visual Basic";
    Libros[2][0] = "Algoritmos"; Libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; Libros[2][2] = "Steve Job";
	Libros[3][0] = "Algoritmos"; Libros[3][1] = "Fundamentos de Informatica y Programacion"; Libros[3][2] = "Elvin Palma";
	Libros[4][0] = "Algoritmos"; Libros[4][1] = "Temas selectos de estructuras de datos"; Libros[4][2] = "Iris Estrada";
	Libros[5][0] = "Algoritmos"; Libros[5][1] = "Teoria sintactico-gramatical de objetos"; Libros[5][2] = "Valentin Palma";
	Libros[6][0] = "Base de Datos"; Libros[6][1] = "Apuntes de Base de Datos 1"; Libros[6][2] = "Margarita Hernandez";
	Libros[7][0] = "Base de Datos"; Libros[7][1] = "Base de Datos (2005)"; Libros[7][2] = "Helen Suarez y Julian Hernandez";
	Libros[8][0] = "Base de Datos"; Libros[8][1] = "Base de Datos (2011)"; Libros[8][2] = "Lazaro Gonzales";
	Libros[9][0] = "Base de Datos"; Libros[9][1] = "Base de Datos Avanzadas (2013)"; Libros[9][2] = "Jimmy Rodriguez";
	
}

int main(int argc, char const *argv[])
{
    //Llama a la función de CargarLibros
    CargarLibros();

    //Semilla para sugerir libros al azar
    srand(time(NULL));

    //Variable que se utilizará que tiene un valor falso
    bool salir = false;

    while (salir == false)
    {
        //Variable que nos servirá para buscar
        string buscar = "";

        //Comando para limpiar la pantalla
        system("cls");

        //Mensaje solicitando la descripción del libro
        cout << "Por favor ingrese la descripcion o el autor del libro que busca: ";
        cin >> buscar;

        //busqueda del libro
        for (int i = 0; i < 10; i++)
        {
            //Variables para buscar el libro en el arreglo
            string Libro = Libros[i][1];
            string LibroEnMinuscula = Libro;

            //Variables para buscar el libro con el nombre del autor en el arreglo
            string Autor = Libros[i][2];
            string AutorEnMinuscula = Autor;

            //Convertir las letras mayúsculas a minúsculas en string Libro y buscar
            transform(LibroEnMinuscula.begin(), LibroEnMinuscula.end(), LibroEnMinuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            //Convertir las letras mayúsculas a minúsculas en string Autor y buscar
            transform(AutorEnMinuscula.begin(), AutorEnMinuscula.end(), AutorEnMinuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            //Condición que se ejecutará cuando se encuentre el libro
            if (LibroEnMinuscula.find(buscar) != string::npos) 
            {
                //Mensaje mostrando el libro solicitado
                cout << endl;
                cout << "Se ha encontrado el libro: " << Libro << endl;
                cout << "Autor del libro: " << Autor << endl;
                cout << endl;

                //Mensaje para sugrir libros de manera aleatoria
                cout << "Tambien te sugerimos los libros de estos autores: " << endl;
                
                //Variables que se utilizará para dar sugerencia de otros libros
                int Sugerencia1 = rand() % 9 + 1;
                int Sugerencia2 = rand() % 9 + 1;
                int Sugerencia3 = rand() % 9 + 1;
                
                //Estos son los libros sugeridos que se mostraran de manera aleatoria
                cout << " Sugerencia 1: " << Libros[Sugerencia1][1] << ", del autor: " << Libros[Sugerencia1][2] << endl;
                cout << " Sugerencia 2: " << Libros[Sugerencia2][1] << ", del autor: " << Libros[Sugerencia2][2] << endl;
                cout << " Sugerencia 3: " << Libros[Sugerencia3][1] << ", del autor: " << Libros[Sugerencia3][2] << endl;
                cout << endl;

                salir = true;

                break;
            }
            else
                //Condición que se ejecutará cuando se encuentre el autor del libro
                if (AutorEnMinuscula.find(buscar) != string::npos) 
                {
                    //Mensaje mostrando el libro del autor solicitado
                    cout << endl;
                    cout << "Se ha encontrado el libro: " << Libro << endl;
                    cout << "Autor del libro: " << Autor << endl;
                    cout << endl;

                    //Mensaje para sugrir libros de autores de manera aleatoria
                    cout << "Tambien te sugerimos los libros de estos autores: " << endl;
                    
                    //Variables que se utilizará para dar sugerencia de otros libros
                    int Sugerencia1 = rand() % 9 + 1;
                    int Sugerencia2 = rand() % 9 + 1;
                    int Sugerencia3 = rand() % 9 + 1;
                    
                    //Estos son los libros sugeridos que se mostraran de manera aleatoria
                    cout << " Sugerencia 1: " << Libros[Sugerencia1][1] << ", del autor: " << Libros[Sugerencia1][2] << endl;
                    cout << " Sugerencia 2: " << Libros[Sugerencia2][1] << ", del autor: " << Libros[Sugerencia2][2] << endl;
                    cout << " Sugerencia 3: " << Libros[Sugerencia3][1] << ", del autor: " << Libros[Sugerencia3][2] << endl;
                    cout << endl;

                    salir = true;

                    break;
                }   
            
        }
            

        if (salir == false)
        {
            //Variable que se utiliza para saber si se continua con el programa o no
            char continuar = 'n';
            while (true)
            {
                //Comando para limpiar la pantalla
                system("cls");

                //Mensaje solicitando si se desea seguir buscando un libro, en caso de no haberlo encontrado
                cout << "No se encontro el libro que busca. Desea continuar s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S')
                {
                    break;  
                }
                else 
                    if(continuar == 'n' || continuar == 'N')
                    {
                        salir = true;
                        break;                    
                    }
                
            }
            
        }
        
    }

    

    return 0;
}