#include <iostream>
using namespace std;

int main() {
    int s, c, i;

    for (s = 0; s <= 100; s++) {

        for (c = 0; c <= 100 - s; c++) {

            i = 100 - s - c;
            int total = 75 * s + 99 * c + 40 * i;

            if (total == 7869) {
                cout << "Senadores: " << s << endl;
                cout << "Congresistas: " << c << endl;
                cout << "Invitados: " << i << endl;

                return 0;
            }
        }
    }

    cout << "No se encontró solución." << endl;
    return 0;
}