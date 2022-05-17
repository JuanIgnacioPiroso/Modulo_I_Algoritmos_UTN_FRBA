#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{

    int n;
    int numero;
    int maximo = 0;
    int minimo = 9999;
    int posMax = 0;
    int posMin = 0;

    cout << "Ingrese un valor n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero " << endl;
        cin >> numero;

        if (numero > maximo)
        {
            maximo = numero;
            posMax = i;
        }

        if (numero < minimo)
        {
            minimo = numero;
            posMin = i;
        }
    }

    cout << "El maximo es: " << maximo << " en la posicion:  " << posMax << endl;
    cout << "El minimo es: " << minimo << " en la posicion:  " << posMin << endl;

    return 0;
}