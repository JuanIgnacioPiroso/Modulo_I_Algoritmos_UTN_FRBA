#include <iostream>
using namespace std;

int main()
{

    int fechaActual;
    int fecha1;
    int fecha2;

    cout << "Ingrese la fecha actual en formato AAAAMMDD" << endl;
    cin >> fechaActual;

    cout << "Ingrese una fecha en formato AAAAMMDD " << endl;
    cin >> fecha1;

    cout << "Ingrese otra fecha en formato AAAAMMDD" << endl;
    cin >> fecha2;

    int fechaMasReciente1 = fechaActual - fecha1;
    int fechaMasReciente2 = fechaActual - fecha2;

    if (fechaMasReciente1 < fechaMasReciente2)
    {
        cout << "La fecha " << fecha1 << " es mas reciente " << endl;
    }
    else if (fechaMasReciente2 < fechaMasReciente1)
    {
        cout << "La fecha " << fecha2 << " es mas reciente " << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;
}