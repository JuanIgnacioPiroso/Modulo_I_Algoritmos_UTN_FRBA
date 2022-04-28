#include <iostream>
using namespace std;

int main () {

    int fecha;

    cout << "Ingrese una fecha en formato AAAAMMDD" << endl;
    cin >> fecha;

    int anio = fecha / 10000;
    int mes = (fecha % 10000) / 100;
    int dia = (fecha % 10000) % 100;

    cout << "El dia es: " << dia << endl;

    cout << "El mes es: " << mes << endl;

    cout << "El anio es: " << anio << endl;
    
    

}