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

    if ((lado1 + lado2 ) > lado3 || (lado1 + lado3)  > lado2)
    {
        cout << "Es triangulo " << endl;

    }
    else if((lado2 + lado3) > lado1)
    {
        cout << "Es triangulo " << endl;
    }
    else
    {
        cout << "No es triangulo" << endl;
    }
    
    
    
    return 0;
}