#include <iostream>
using namespace std;

#Ejercicio5

int main(){

    int numero1;
    int numero2;

    cout << "Ingrese un numero" << endl;
    cin >> numero1;

    cout << "Ingrese otro numero " << endl;
    cin >> numero2;

    if(numero1 > numero2)
    {

        cout << numero1 << " es mayor que " << numero2 << endl;
    }
    else 
    {

        cout << numero2 << "es mayor que " << numero1 << endl;
        
 
    }

    return 0;
}