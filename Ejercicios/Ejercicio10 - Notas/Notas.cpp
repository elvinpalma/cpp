#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int Nota = 0;
    
    cout << "Ingrese la nota que obtuvo: ";
    cin >> Nota;
    cout << endl;

    if (Nota >= 95 && Nota <= 100)
    {
        cout << "Obtuviste una A";
    }
    else
    {

        if (Nota >= 85 && Nota <= 94)
        {
            cout << "Obtuviste una B";
        }
        else
        {
            if (Nota >= 75 && Nota <= 84)
            {
                cout << "Obtuviste una C";
            }
            else
            {
                if (Nota >= 60 && Nota <= 74)
                {
                    cout << "Obtuviste una E";
                }
                else
                {
                  if (Nota >= 60 && Nota <= 74)
                    {
                        cout << "Obtuviste una E";
                    }
                    else
                    {
                        if (Nota < 60)
                        {
                            cout << "Obtuviste una F";
                        }
                        else
                        {
                            cout << "Ingrese una nota entre 0 y 100";
                        }
                    }
  
                }
  
            }

        }
    }    
    
    cout << endl;

    return 0;
}
