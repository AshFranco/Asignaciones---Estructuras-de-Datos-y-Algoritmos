#include <iostream>
using namespace std;

int main() {
    cout << "Camiones de la compania La Tortuga:\n";

    int contador = 0;

    for (int n = 1; n < 500; n++) {
        long long cuadrado = (long long)n * n;

        // Revisamos si el cuadrado termina en n
        long long digitos = 1;
        int temp = n;

        // calculamos cuántos dígitos tiene n
        while (temp > 0) {
            digitos *= 10;
            temp /= 10;
        }

        if (cuadrado % digitos == n) {
            cout << n << " (porque " << n << "^2 = " << cuadrado << ")\n";
            contador++;
        }
    }

    cout << "\nCantidad total de camiones: " << contador << endl;

    return 0;
}
