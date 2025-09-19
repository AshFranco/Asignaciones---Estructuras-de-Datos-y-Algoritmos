#include <iostream>
using namespace std;

// Función que calcula la suma de divisores propios de un número
int sumaDivisores(int n) {
    int suma = 1; // 1 siempre es divisor
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            suma += i;
    }
    return suma;
}

int main() {
    cout << "Numeros perfectos menores de 10000:" << endl;
    
    for (int i = 2; i < 10000; i++) {
        if (sumaDivisores(i) == i)
            cout << i << endl;
    }

    return 0;
}
