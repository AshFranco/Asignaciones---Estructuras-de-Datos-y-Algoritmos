/*
Dada la cantidad de poblaciones que quieres, generar la cantidad de números aleatorios en la población,
y sacarle la desviación estandar
*/

#include <iostream>
using namespace std;
int main()
{
	cout << "Ingrese la cantidad de poblaciones: ";
	int poblaciones;
	cin >> poblaciones;
	for (int i = 0; i < poblaciones; i++)
	{
		cout << "Ingrese la cantidad de numeros en la poblacion " << i + 1 << ": ";
		int cantidad;
		cin >> cantidad;
		float numeros[cantidad];
		float suma = 0;
		for (int j = 0; j < cantidad; j++)
		{
			numeros[j] = rand() % 100; // Genera un numero aleatorio entre 0 y 99
			suma += numeros[j];
		}
		float media = suma / cantidad;
		float desviacion = 0;
		for (int j = 0; j < cantidad; j++)
		{
			desviacion += (numeros[j] - media) * (numeros[j] - media);
		}
		desviacion = sqrt(desviacion / cantidad);
		cout << "La desviacion estandar de la poblacion " << i + 1 << " es: " << desviacion << endl;
	}
}

