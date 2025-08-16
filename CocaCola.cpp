/*
* Asignacion: Hacer un programa que cuenta de 1 a 100, si el numero es multiplo de 3 impmrime COCA, si es multiplo de 5 imprime COLA, si es multiplo de ambos imprime COCA COLA
* Estuiante : Ashley Franco || 1127646
* Fecha: 14/08/2005
*/

#include <iostream>
using namespace std;

int main() {

	int i;
	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "Coca Cola";
			cout << '\n';
		}
		else if (i % 3 == 0 )
		{
			cout << "Coca" ;
			cout << '\n';
		}
		else if (i % 5 == 0)
		{
			cout << "Cola";
			cout << '\n';
		}
		else {
			cout << i << "\n";
		}
		
	}

	return 0;

}
