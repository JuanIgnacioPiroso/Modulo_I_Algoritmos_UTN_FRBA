#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{

    string nombre;
    int fechaNacimiento;
    int minimo = 9999;
    int maximo = 0;

    string nombreMayor;
    string nombreJoven;


    while (nombre != "FIN")
    {
        cout << "Ingrese su nombre " << endl;
        cin >> nombre;

        cout << "Ingrese su fecha de nacimiento en formato AAAAMMDD " << endl;
        cin >> fechaNacimiento;

        if (fechaNacimiento < minimo)
        {
            minimo = fechaNacimiento;
            nombreMayor = nombre;
        }

        if (fechaNacimiento > maximo)
        {
            maximo = fechaNacimiento;
            nombreJoven = nombre;
        }
    }

    cout << "La persona mas joven es: " << nombreJoven << endl;
    cout << "La persona mas vieja es: " << nombreMayor << endl;

    return 0;
}