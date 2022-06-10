#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    int n = 0;
    int numero = 0;
    int ceros = 0;
    float promedioPositivos = 0;
    int sumatoriaNegativos = 0;

    // cout << "Ingresa los n valores " << endl;
    // cin >> n;

    for (int i = 0; i < 167; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> numero;

        if (numero == 0)
        {
            ceros++;
        }
        if (numero > 0)
        {
            promedioPositivos = promedioPositivos + numero;
        }
        if (numero < 0)
        {
            sumatoriaNegativos = sumatoriaNegativos + numero;
        }
        
    }

    cout << "La cantidad de valores 0 que se ingresaron fueron: " << ceros << endl;
    cout << "El promedio de los positivos fueron: " << promedioPositivos / 167 << endl;
    cout << "La sumatoria de los negativos es: " << sumatoriaNegativos << endl;

     
    return 0;
}