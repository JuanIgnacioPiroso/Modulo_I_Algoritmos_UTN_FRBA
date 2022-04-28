#include <iostream>
using namespace std;

int main(){

    int dia;
    int mes;
    int anio;

    cout << "Ingrese un dia " << endl;
    cin >> dia;

    cout << "Ingrese un mes" << endl;
    cin >> mes;

    cout << "Ingrese un anio" << endl;
    cin >> anio;

    int fechaUnida = anio * 10000 + mes * 100 + dia;

    cout << "La fecha en formato AAAAMMDD es: " << fechaUnida<< endl;


    return 0;
}