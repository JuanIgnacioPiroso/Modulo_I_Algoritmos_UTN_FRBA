#include <iostream>
using namespace std;

int main(){

    int identificadorContenedor = 0;
    float pesoContenedor = 0;
    int puertoArribo = 0;
    float pesoTotal = 0;
    int contenedorMayorPeso = 0;
    int identificadorMayorPeso;
    int contadorPuerto1 = 0;
    int contadorPuerto2 = 0;
    int contadorPuerto3 = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese la identificacion del contenedor" << endl;
        cin >> identificadorContenedor;

        cout << "Ingrese el peso del contenedor en kg" << endl;
        cin >> pesoContenedor;

        cout << "Ingrese el puerto de arribo (1 , 2 o 3)" << endl;
        cin >> puertoArribo;

        pesoTotal = pesoTotal + pesoContenedor;

        if (pesoContenedor > contenedorMayorPeso)
        {
            contenedorMayorPeso = pesoContenedor;
            identificadorMayorPeso = identificadorContenedor;

        }

        if (puertoArribo == 1)
        {
            contadorPuerto1++;
        }
        else if (puertoArribo == 2)
        {
            contadorPuerto2++;
        }
        else
        {
            contadorPuerto3++;
        }
        
        
        


    }

    cout << "El peso total que el buque debe cargar es: " << pesoTotal << endl;
    cout << "El identificador del contenedor de mayor peso es: " << identificadorMayorPeso << " con " << contenedorMayorPeso << " kg" << endl;
    cout << "Al puerto 1 van: " << contadorPuerto1 << " contenedores" << endl; 
    cout << "Al puerto 2 van: " << contadorPuerto2 << " contenedores" << endl; 
    cout << "Al puerto 3 van: " << contadorPuerto3 << " contenedores" << endl; 

    

    return 0;
} 