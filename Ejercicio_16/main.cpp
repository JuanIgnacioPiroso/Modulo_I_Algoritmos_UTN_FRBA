#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{

    int numero = 0;
    int contador = 0;

    while (numero >= 0)
    {
        cout << "Ingrese un numero " << endl;
        cin >> numero;


        contador++;
    }

    cout << "La cantidad de valores ingresados es de : " << contador-1 << endl;
    

    return 0;
}