#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <conio.h>

using namespace std;

int main()
{

    int nroEquipos = 0;
    int codEquipo = 0;
    int puntosTotales = 0;
    char codResultado;

    cout << "Ingrese numero de equipos " << endl;
    cin >> nroEquipos;

    for (int i = 0; i < nroEquipos; i++)
    {
        cout << "Ingrese codigo de equipo " << endl;
        cin >> codEquipo;

        for (int j = 0; i < nroEquipos-1; i++)
        {
            cout << "Ingrese codigo de resultado " << endl;
            cin >> codResultado;

            switch (codResultado)
            {
            case 'G':
                puntosTotales +=3;
                break;
            case 'E':
                puntosTotales++;

                break;
            
            default:
                break;
            } 
        }

        cout << "Equipo: " << codEquipo << " obtuvo un total de: " << puntosTotales << " puntos " << endl;
        puntosTotales = 0;
        
    }
    

    return 0;
}