#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    char tipoInfraccion;
    string motivoInfraccion;
    float valorMulta = 0;
    char gravedadInfraccion;
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el tipo de la infraccion " << endl;
        cin >> tipoInfraccion;

        cout << "Ingrese el motivo de la infraccion " << endl;
        cin >> motivoInfraccion;

        cout << "Ingrese el valor de la multa " << endl;
        cin >> valorMulta;

        cout << "Ingrese la gravedad de la infraccion " << endl;
        cin >> gravedadInfraccion;

        if ((tipoInfraccion = '3') && (gravedadInfraccion = 'G'))
        {
            contador++;
        }
        else if ((tipoInfraccion = '4') && (gravedadInfraccion = 'G'))
        {
            contador++;
        }
    }

    if (contador > 3)
    {
        cout << "Clausurar fabrica" << endl;
    }

    return 0;
}