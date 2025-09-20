#include <iostream>
using namespace std;

// Utilizando ciclos for, hacer un programa que imprima una pirámide como la siguiente:
//    *
//   ***
// etc

int main()
{
	int n;
	n = 5; // Altura de la pirámide

	for (int i = 0; i < n; i++)
	{
		// Imprimir espacios
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		// Imprimir asteriscos
		for (int k = 0; k < 2 * i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}