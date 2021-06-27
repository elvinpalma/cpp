#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int Nota = 0;
    
    cout << "Ingrese la nota que obtuvo: ";
    cin >> Nota;
    cout << endl;

    if (Nota >= 96 && Nota <= 100)
    {
        cout << "Obtuviste una A++";
    }
    else
    {

        if (Nota >= 91 && Nota <= 95)
        {
            cout << "Obtuviste una A+";
        }
        else
        {
            if (Nota >= 86 && Nota <= 90)
            {
                cout << "Obtuviste una A";
            }
            else
            {
                if (Nota >= 81 && Nota <= 85)
                {
                    cout << "Obtuviste una A-";
                }
                else
                {
                  if (Nota >= 76 && Nota <= 80)
                    {
                        cout << "Obtuviste una B+";
                    }
                    else
                    {
                        if (Nota >= 71 && Nota <= 75)
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
