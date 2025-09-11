#include <iostream>
#include <vector>
using namespace std;

int calcularLongitudCadena(int n) {
    int longitud = 1; // Empezamos con el número inicial
    while (n != 4) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        longitud++;
    }
    return longitud;
}

int main() {
    int maxLongitud = 0;
    int numeroMax = 0;
    
    for (int i = 1; i <= 99; i++) {
        int longitud = calcularLongitudCadena(i);
        if (longitud > maxLongitud) {
            maxLongitud = longitud;
            numeroMax = i;
        }
    }
    
    cout << "El invitado con el número " << numeroMax << " tiene la cadena más larga con " << maxLongitud << " elementos." << endl;
    
    return 0;
}