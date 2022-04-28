#include <iostream>
using namespace std;

int main()
{

    int anio;
    int mes;

    cout << "Ingrese el anio" << endl;
    cin >> anio;

    cout << "Ingrese el mes " << endl;
    cin >> mes;

    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
    {
        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "El mes tiene 31 dias" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:

            cout << "El mes tiene 30 dias " << endl;
            break;
        case 2:

            cout << "El mes tiene 29 dias " << endl;
            break;
        default:
            cout << "Ingrese un mes correcto" << endl;
            break;
        }
    }
    else
    {
        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "El mes tiene 31 dias" << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:

            cout << "El mes tiene 30 dias " << endl;
            break;

        case 2:

            cout << "El mes tiene 28 dias " << endl;
            break;

        default:

            cout << "Ingrese un mes correcto" << endl;
            break;
        }
    }

    return 0;
}