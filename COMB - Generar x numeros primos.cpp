#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función para encontrar los primeros x números primos
void primerosPrimos(int x) {
    cout << "Los primeros " << x << " números primos son:" << endl;
    int count = 0;
    int num = 2;
    while (count < x) {
        if (esPrimo(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

// Función para descomponer un número en sus factores primos
void factoresPrimos(int n) {
    cout << "Factores primos de " << n << ":" << endl;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            cout << i << " ";
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        cout << n;
    }
}

int main() {
    int opcion;
    cout << "Opciones:" << endl;
    cout << "1. Buscar los primeros x números primos" << endl;
    cout << "2. Descomponer un número en sus factores primos" << endl;
    cin >> opcion;

    if (opcion == 1) {
        int x;
        cout << "Ingrese el número de primos que desea encontrar: ";
        cin >> x;
        primerosPrimos(x);
    } else if (opcion == 2) {
        int num;
        cout << "Ingrese un número entero: ";
        cin >> num;
        factoresPrimos(num);
    } else {
        cout << "Opción inválida";
    }

    return 0;
}

