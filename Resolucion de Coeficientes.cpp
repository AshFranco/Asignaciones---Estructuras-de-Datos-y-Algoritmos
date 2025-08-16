#include <iostream>
#include <cmath>
#include <iomanip> // Para std::setprecision

using namespace std;

int main() {
    double a, b, c;
    double discriminante, x1, x2;
    double parteReal, parteImaginaria;

    cout << "SOLUCIONADOR DE ECUACIONES CUADRATICAS (ax^2 + bx + c = 0)\n\n";
    cout << "Ingrese los coeficientes a, b y c separados por espacios: ";
    cin >> a >> b >> c;

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;

    cout << fixed << setprecision(6); // Configurar precisión decimal

    // Caso 1: Coeficiente cuadrático es cero (ecuación lineal)
    if (a == 0) {
        if (b != 0) {
            x1 = -c / b;
            cout << "\nLa ecuacion es lineal (a=0). Solucion unica:\n";
            cout << "x = " << x1 << endl;
        }
        else {
            if (c == 0) {
                cout << "\nLa ecuacion es trivial (0 = 0). Todos los numeros reales son solucion.\n";
            }
            else {
                cout << "\nLa ecuacion no tiene solucion (" << c << " = 0 es falso).\n";
            }
        }
        return 0;
    }

    // Caso 2: Discriminante positivo (dos soluciones reales distintas)
    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "\nExisten dos soluciones reales distintas:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    // Caso 3: Discriminante cero (una solución real doble)
    else if (discriminante == 0) {
        x1 = -b / (2 * a);
        cout << "\nExiste una solucion real doble:\n";
        cout << "x = " << x1 << endl;
    }
    // Caso 4: Discriminante negativo (soluciones complejas conjugadas)
    else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "\nExisten dos soluciones complejas conjugadas:\n";
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i\n";
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i\n";
    }

    return 0;
}