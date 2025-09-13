#include <iostream>
using namespace std;

bool cumplePropiedad(int hora, int minutos) {
    int horaCuadrado = (hora / 10) * (hora / 10) + (hora % 10) * (hora % 10);
    int minutosCuadrado = (minutos / 10) * (minutos / 10) + (minutos % 10) * (minutos % 10);
    return hora * 100 + minutos == horaCuadrado + minutosCuadrado;
}

int main() {
    for (int hora = 0; hora < 24; hora++) {
        for (int minutos = 0; minutos < 60; minutos++) {
            if (cumplePropiedad(hora, minutos)) {
                cout << "La hora que cumple la propiedad es: " << (hora < 10 ? "0" : "") << hora << ":" << (minutos < 10 ? "0" : "") << minutos << endl;
            }
        }
    }
    
}