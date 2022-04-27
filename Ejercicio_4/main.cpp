#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero entero " << endl;
    cin >> numero;

    float quintaParte = numero / 5;
    float restoCinco = numero % 5;
    float septimaParte = quintaParte / 7;

    cout << "La quinta parte es: " << quintaParte << endl;
    cout << "El resto de dividir por 5 es: " << restoCinco << endl;
    cout << "La septima parte de la quinta parte es: " << septimaParte << endl;

    return 0;
}