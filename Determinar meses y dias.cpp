#include <iostream>
using namespace std;

//año es bisiesto
bool esBisiesto(int año) {
    return (año % 400 == 0) || (año % 4 == 0 && año % 100 != 0);
}

int main() {
    int dia, mes, año;

    cout << "Ingrese la fecha (dd mm aaaa): ";
    cin >> dia >> mes >> año;

    //dias para un año no bisiesto)
    int diasMes[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    //febrero
    if (esBisiesto(año)) {
        diasMes[1] = 29;
    }

    //meses completos transcurridos
    int mesesTranscurridos = mes;

    //dias en el último mes
    int diasTranscurridos = dia - 1;

    cout << "\nHan transcurrido: \n"
        << mesesTranscurridos << " meses  \n"
        << diasTranscurridos << " dias \nDesde el 1 de enero de "
        << año << endl;

    return 0;
}
