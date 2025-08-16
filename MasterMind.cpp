///1: includes, inicio de main  y presentación del juego
#include <iostream>  //entrada y salida de datos
#include <sstream>  //manejar la entrada del usuario
#include <string>   //manejar cadenas
#include <ctime>    //trabajar con tiempo (la semilla que se forma)
#include <cstdlib>  //para funciones de numeros aleatorios
using namespace std;

int main()
{
    srand((unsigned)time(0)); // semilla para numeros aleatorios

    cout << "Master Mind (4 digitos, rango 1-6, sin repeticiones)\n";
    cout << "\nTienes 10 intentos para adivinar la clave.\n";
    cout << "Pistas por posicion: C (correcto en sitio), F (existe pero en otra posicion), X (no existe).\n\n";

    // 2: generar la clave secreta de 4 dígitos (1..6) sin repeticiones
    int clave[4];
    bool usado[6] = { false };
    for (int i = 0; i < 4; ++i)
    {
        int r;
        do { r = rand() % 6; } while (usado[r]);
        clave[i] = r + 1;
        usado[r] = true;
    }

    // 3: variables de control (intentos, límite) y comienzo del bucle principal
    const int MAX_INTENTOS = 10;
    int intento = 0;
    bool ganado = false;

    while (intento < MAX_INTENTOS && !ganado)
    {
        ++intento;
        cout << "\nIntento " << intento << " - Ingresa 4 numeros (separados por espacios) entre 1 y 6: ";

        cin.clear();
        cin.sync();

        string linea;
        getline(cin, linea);
        if (linea.empty())
        {
            --intento;
            continue;
        }

        // 4: lectura de la entrada y validación 
        int guess[4];
        bool lecturaOK = true;
        bool repetido[6] = { false };

        istringstream iss(linea);
        for (int i = 0; i < 4; ++i)
        {
            if (!(iss >> guess[i]))
            { // no hay un número válido
                lecturaOK = false;
                break;
            }
            if (guess[i] < 1 || guess[i] > 6)
            { // fuera de rango
                lecturaOK = false;
                break;
            }
            if (repetido[guess[i] - 1])
            { // ya usado antes
                lecturaOK = false;
                break;
            }
            repetido[guess[i] - 1] = true; // marcar como usado
        }

        // comprobar si hay números extra
        int extra;
        if (lecturaOK && (iss >> extra)) lecturaOK = false;

        if (!lecturaOK)
        {
            cout << "Entrada no valida. Debes ingresar 4 numeros enteros entre 1 y 6 sin repetir.\n";
            continue; // <-- Esto salta directamente al siguiente intento
        }



        // 5: calcular las pistas por posición ('C', 'F' o 'X')
        char pistas[4];
        for (int i = 0; i < 4; ++i)
        {
            if (guess[i] == clave[i]) pistas[i] = 'C';
            else
            {
                bool existe = false;
                for (int j = 0; j < 4; ++j)
                    if (j != i && guess[i] == clave[j])
                    {
                        existe = true;
                        break;
                    }
                pistas[i] = existe ? 'F' : 'X';
            }
        }

        //6: mostrar pistas, comprobar victoria y manejar fin del juego
        cout << "Pistas: ";
        for (int i = 0; i < 4; ++i) cout << pistas[i] << ' ';
        cout << '\n';

        bool todasC = true;
        for (int i = 0; i < 4; ++i)
            if (pistas[i] != 'C')
            {
                todasC = false;
                break;
            }

        if (todasC)
        {
            ganado = true;
            int puntuacion = MAX_INTENTOS - intento;
            cout << "\nFelicidades. Adivinaste la clave en el intento " << intento << ".\n";
            cout << "Puntuacion: " << puntuacion << '\n';
            break;
        }
    }

    if (!ganado)
    {
        cout << "\nSe han agotado los intentos. Perdiste.\n";
        cout << "La clave era: ";
        for (int i = 0; i < 4; ++i) cout << clave[i] << (i < 3 ? ' ' : '\n');
        cout << "Puntuacion: 0\n";
    }

    return 0;
}