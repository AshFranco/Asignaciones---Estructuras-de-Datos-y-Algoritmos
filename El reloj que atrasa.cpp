#include <iostream>
#include <cmath>   
using namespace std;

//Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    double atrasoTotal = 0.0;

    // 24 horas
    for (int n = 1; n <= 24; n++) {
        int fn = fibonacci(n); // Calculamos F(n)
        double atrasoHora = fn / pow(2.0, n); // Atraso por hora
        atrasoTotal += atrasoHora;
    }

    cout << "El reloj se atrasara en 24 horas un total de: "
         << atrasoTotal << " minutos." << endl;

    return 0;
}