#include <iostream>
using namespace std;

void fibonacci(int n) {
    long long a = 0;
    long long b = 1;
    cout << "Secuencia de Fibonacci hasta " << n << " terminos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a << "\n";
        long long temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    int n = 50;
    fibonacci(n);
    return 0;
}

