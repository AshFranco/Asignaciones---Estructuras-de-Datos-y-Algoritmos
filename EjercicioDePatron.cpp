/*
* Asignacion: Hacer un programa C++ que genere el siguiente patron. Utilice ciclos FOR y escriba un solo aterisco a la vez
* Estuiante : Ashley Franco || 1127646
* Fecha: 14/08/2005
*/
#include <iostream>
using namespace std;


int main()
{
    int Nivel = 7; 

    for (int i = 1; i <= Nivel; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << '\n';
       
    }

    return 0;
}
