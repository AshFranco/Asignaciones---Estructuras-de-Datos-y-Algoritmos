#include <iostream>
using namespace std;

//a�o es bisiesto
bool esBisiesto(int a�o) {
    return (a�o % 400 == 0) || (a�o % 4 == 0 && a�o % 100 != 0);
}

int main() {
    int dia, mes, a�o;

    cout << "Ingrese la fecha (dd mm aaaa): ";
    cin >> dia >> mes >> a�o;

    //dias para un a�o no bisiesto)
    int diasMes[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    //febrero
    if (esBisiesto(a�o)) {
        diasMes[1] = 29;
    }

    //meses completos transcurridos
    int mesesTranscurridos = mes;

    //dias en el �ltimo mes
    int diasTranscurridos = dia - 1;

    cout << "\nHan transcurrido: \n"
        << mesesTranscurridos << " meses  \n"
        << diasTranscurridos << " dias \nDesde el 1 de enero de "
        << a�o << endl;

    return 0;
}
