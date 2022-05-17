#include <iostream>
using namespace std;

int main()
{
    int sumatoria = 0;

    cout << "Los primeros cien numeros naturales son: " << endl;

    for (int i = 0; i <= 100; i++)
    {

        cout << i << endl;

        sumatoria = sumatoria + i;
    }

    cout << "El valor de su sumatoria es: " << sumatoria << endl;

    return 0;
}