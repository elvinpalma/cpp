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
                            cout << "Obtuviste una B";
                        }
                        else
                        {
                            if (Nota >= 66 && Nota <= 70)
                            {
                                cout << "Obtuviste una B-";
                            }
                            else
                            {
                                if (Nota >= 61 && Nota <= 65)
                                {
                                    cout << "Obtuviste una C+";
                                }
                                else
                                {
                                    if (Nota >= 56 && Nota <= 60)
                                    {
                                        cout << "Obtuviste una C";
                                    }
                                    else
                                    {
                                        if (Nota >= 51 && Nota <= 55)
                                        {
                                            cout << "Obtuviste una C-";
                                        }
                                        else
                                        {
                                            if (Nota >= 46 && Nota <= 50)
                                            {
                                                cout << "Obtuviste una D+";
                                            }
                                            else
                                            {
                                                if (Nota >= 41 && Nota <= 45)
                                                {
                                                    cout << "Obtuviste una D";
                                                }
                                                else
                                                {
                                                    if (Nota >= 36 && Nota <= 40)
                                                    {
                                                        cout << "Obtuviste una D-";
                                                    }
                                                    else
                                                    {
                                                        if (Nota >= 31 && Nota <= 35)
                                                        {
                                                            cout << "Obtuviste una E+";
                                                        }
                                                        else
                                                        {
                                                            if (Nota >= 26 && Nota <= 30)
                                                            {
                                                                cout << "Obtuviste una E";
                                                            }
                                                            else
                                                            {
                                                                if (Nota >= 21 && Nota <= 25)
                                                                {
                                                                    cout << "Obtuviste una E-";
                                                                }
                                                                else
                                                                {
                                                                    if (Nota >= 16 && Nota <= 20)
                                                                    {
                                                                        cout << "Obtuviste una F+";
                                                                    }
                                                                    else
                                                                    {
                                                                        if (Nota >= 11 && Nota <= 15)
                                                                        {
                                                                            cout << "Obtuviste una F";
                                                                        }
                                                                        else
                                                                        {
                                                                            if (Nota >= 6 && Nota <= 10)
                                                                            {
                                                                                cout << "Obtuviste una F";
                                                                            }
                                                                            else
                                                                            {
                                                                                if (Nota >= 1 && Nota <= 5)
                                                                                {
                                                                                    cout << "Obtuviste una F-";
                                                                                }
                                                                                else
                                                                                {
                                                                                    if (Nota == 0)
                                                                                    {
                                                                                        cout << "Obtuviste una F--";
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
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                         
                        }
                        
                    }
  
                }
  
            }

        }
    }    
    
    cout << endl;

    return 0;
}
