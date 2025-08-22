#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Cubos narcisistas:" << endl;

    // Recorremos números del 1 al 999
    for (int num = 1; num <= 999; num++) {
        int sumaCubos = 0;
        int temp = num;

        // Descomponer el número en sus dígitos y sumar los cubos
        while (temp > 0) {
            int digito = temp % 10;
            sumaCubos += pow(digito, 3);
            temp /= 10;
        }

        // Validamos si es un cubo narcisista
        if (sumaCubos == num) {
            cout << num << " es un cubo narcisista" << endl;
        }
    }

    return 0;
}