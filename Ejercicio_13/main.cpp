#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    int m = 0;

    int resultado = 0;

    cout << "Ingrese un numero n " << endl;
    cin >> n;

    cout << "Ingrese un numero m" << endl;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        resultado = resultado + m;
    }

    cout << "El resultado de multiplcar n x m es: " << resultado << endl;

    return 0;
}