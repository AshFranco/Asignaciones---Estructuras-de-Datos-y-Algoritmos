#include <iostream>
using namespace std;

int main() {
    
    int x = 0; // floreros semana pasada
    int actual = 0; // floreros ahora

    // encontrando valores que cumplan las condiciones
    for (int i = 1; i <= 100; i++) {

        if (i % 6 == 0) { // multiplo de 6

            if ((i - 8) % 11 == 0 && (i - 8) > 0) { // multiplo de 11 y positivo
            
                x = i;              // semana pasada
                actual = i - 8;     // ahora
                break;              // ya lo encontramos
            
            }
        }
    }

    cout << "Floreros semana pasada: " << x << endl;
    cout << "Floreros actuales: " << actual << endl;

    return 0;
}
