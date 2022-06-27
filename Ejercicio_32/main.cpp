#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main(){

    //Cantidad de vuelos
    int cantVuelos = 0; 

    //Informacion de cada vuelo
    int numeroVuelo = 0;
    string destino;
    int cantAsientos = 0;

    //Informacion de cada pasajero
    int numeroPasaporte = -1;
    double precioPasajeUSD = 0;
    int cantPasajeros = 0;

    double totalUSD = 0;

    cout << "Ingrese la cantidad de vuelos: " << endl;
    cin >> cantVuelos;

    for (int i = 0; i < cantVuelos; i++)
    {
        cout << "Ingrese el numero de vuelo: " << endl;
        cin >> numeroVuelo;
        cout << "Ingrese el destino: " << endl;
        cin >> destino;
        cout << "Ingrese la cantidad de asientos: " << endl;
        cin >> cantAsientos;
        while (numeroPasaporte!=0)
        {
            cout << "Ingrese el numero de pasaporte: " << endl;
            cin >> numeroPasaporte;
            if (numeroPasaporte ==0)
            {
                break;
            }
            cout << "Ingrese el precio del pasaje en USD: " << endl;
            cin >> precioPasajeUSD;
            cantPasajeros++;
            totalUSD += precioPasajeUSD;

        }

        cout << "El numero de vuelo es: " << numeroVuelo << " con destino: " << destino <<endl;
        cout << "Numero de pasaporte: " << numeroPasaporte << " con precio: " << precioPasajeUSD << " USD" << endl;
        cout << "Total recaudado por el vuelo " << numeroVuelo << " es: " << totalUSD << " USD" << endl;
        cout << "Porcentaje de asientos libres del vuelo: " << numeroVuelo << " es: " << (cantAsientos-cantPasajeros)*100/cantAsientos << "%" << endl;
        cout << "Porcentaje de asientos ocupados del vuelo: " << numeroVuelo << " es: " << cantPasajeros*100/cantAsientos << "%" << endl;
        
    }

    cout << "Total recaudado en el mes: " << totalUSD << " USD" << endl;
    cout << "Cantidad de veces seguidas que se dieron vuelos completos: " << endl;
    cout << "El numero de vuelo que mas recaudo es: " << endl;
    



    

    return 0;
} 