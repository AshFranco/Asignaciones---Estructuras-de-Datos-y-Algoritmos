#include <iostream>
#include <limits> 
#include <stdexcept> 
using namespace std;

int main() {
    double numeros[5];
    double mayor;

    cout << "Programa para determinar el mayor de 5 valores.\n";

    for (int i = 0; i < 5; i++) {
        while (true) { 
            try {
                cout << "Ingrese el valor #" << i + 1 << ": ";
                cin >> numeros[i];

                if (cin.fail()) {
                    throw invalid_argument("Error: se esperaba un numero valido\n.");
                }

                break; 

            }
            catch (const invalid_argument& e) {
                cerr << e.what() << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            }
        }
    }

    
    mayor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "\nEl mayor valor ingresado es: " << mayor << endl;

    return 0;
}