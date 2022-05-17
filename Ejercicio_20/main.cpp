#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    
    int maximo = 0;

    int numero;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero " << endl;
        cin >> numero;

        if (numero > maximo)
        {
            maximo = numero;
        }
        
    }

    cout << "El numero mayor es: " << maximo << endl;
    
 
    return 0;
}