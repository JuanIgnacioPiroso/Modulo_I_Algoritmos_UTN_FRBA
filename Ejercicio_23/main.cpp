#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{

    int numero;
    int maximo = -9999;
    int minimo = 9999;
    float promedio;
    float sumaPromedio = 0;
    int contadorPromedio = 0;
    int minimoEntre = 9999;

    while (numero != 0)
    {
        cout << "Ingrese un numero " << endl;
        cin >> numero;

        if (numero < 0 && numero > maximo)
        {
            maximo = numero;
        }
        if (numero > 0 && numero < minimo)
        {
            minimo = numero;
        }
        if ((numero >= -17.3 && numero <=26.9) && numero < minimoEntre)
        {
            minimoEntre = numero;
        }
                

        sumaPromedio = sumaPromedio + numero;
        contadorPromedio++;
    }

    promedio = sumaPromedio / contadorPromedio;

    cout << "El maximo negativo es: " << maximo << endl;
    cout << "El minimo positivo es: " << minimo << endl;
    cout << "El minimo dentro del rango -17.3 y 26.9 es: " << minimoEntre << endl;
    cout << "El promedio de todos los valores es: " << promedio << endl;

    return 0;
}