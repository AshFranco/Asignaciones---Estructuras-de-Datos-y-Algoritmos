#include <iostream>
using namespace std;

void factoresPrimos(int n) {
    cout << "\nFactores primos de " << n << ":" << endl;
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
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    factoresPrimos(num);
    return 0;
}
