#include <iostream>
using namespace std;

int main()
{

    int lado1;
    int lado2;
    int lado3;

    cout << "Ingrese los valores de los lados del triangulo " << endl;
    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "El triangulo es equilatero" << endl;
    }
    else if (lado1 != lado2 && lado2 != lado3)
    {
        cout << "El triangulo es escaleno " << endl;
    }
    else
    {

        cout << "El triangulo es isosceles" << endl;
    }

    return 0;
}