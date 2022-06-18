#include <iostream>
using namespace std;

int main()
{

    int sumaPromedio=0;
    int numero;
    int suma=0;
    int contadorCien = 0;

    for (int i = 0; i < 50; i++)
    {
        cout << "Ingrese un numero " << endl;
        cin >> numero;

        if (numero > 100)
        {
            sumaPromedio = sumaPromedio + numero;
            contadorCien++;
        }

        if (numero < -10)
        {
            suma = suma + numero;

        }
        
        
    }

    cout << "El promedio de los mayores que 100 es: " << sumaPromedio / contadorCien << endl;
    cout << "La suma de los menores que -10 es: " << suma << endl;
    

    return 0;
    
}