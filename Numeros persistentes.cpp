#include <iostream>
using namespace std;

int main() {
    int numero = 99;
    int num = numero;
    int repeticiones = 0;

    cout << "Nº inicial es: " << numero << "." << endl;

    while(num > 9){
        int producto = 1;
        while(num != 0){
            int unidades = num % 10;
            producto *= unidades;
            num = (num - unidades)/10;
        }

        repeticiones++;
        cout << "Producto " << repeticiones << "º es: " << producto << endl;
        num = producto;
    }

    cout << "La persistencia es: " << repeticiones << ", la cifra final: " << num << endl;
    return 0;
}