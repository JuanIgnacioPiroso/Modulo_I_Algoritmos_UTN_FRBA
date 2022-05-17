#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    float sueldo;
    int contadorA = 0;
    int contadorB = 0;
    int contadorC = 0;
    int contadorD = 0;

    while (sueldo != 0)
    {
        cout << "Ingrese el sueldo del empleado " << endl;
        cin >> sueldo;

        if (sueldo < 1520 && sueldo !=0)
        {
            contadorA++;
        }
        if (sueldo >= 1520 && sueldo < 2780)
        {
            contadorB++;
        }
        if (sueldo >= 2780 && sueldo < 5999)
        {
            contadorC++;
        }
        if (sueldo >= 5999)
        {
            contadorD++;
        }
                
    }

    cout << "Cuantos empleados ganan menos $1.520: " << contadorA << endl;
    cout << "Cuantos ganan $1.520 o mas pero menos de $2.780: " << contadorB << endl;
    cout << "Cuantos ganan $2.780 o mas pero menos de $5.999: " << contadorC << endl;
    cout << "Cuantos ganan $5.999 o mas: " << contadorD << endl;

    
    return 0;
}