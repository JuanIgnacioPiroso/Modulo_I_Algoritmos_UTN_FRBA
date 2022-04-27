#include <iostream>
using namespace std;

int main(){

    int A;
    int B;

    cout << "Ingrese un valor" << endl;
    cin >> A;

    cout << "Ingrese otro valor" << endl;
    cin >> B;

    int suma = A + B;
    int resta = A - B;
    int producto = A * B;

    cout << "El resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado del producto es: " << producto;

    

    return 0;
} 