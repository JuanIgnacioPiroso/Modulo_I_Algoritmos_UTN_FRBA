#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <conio.h>

struct Familia
{
    char domicilio[20];
    char tipoVivienda[1];
    int cantidadIntegrantes;
};

struct IntegrantesFamilia
{
    char nombre[20];
    char apellido[20];
    int edad;
    char sexo[1];
    char nivelEstudiosAlcanzados[1];
    char estudiosCompletos[1];
};

using namespace std;

int main()
{

    int cantidadCasas = 0;
    int lenFamilia = 0;
    Familia vecFamilia[lenFamilia];

    int lenIntegrantes = 0;
    IntegrantesFamilia vecIntegrantesFamiliar[lenIntegrantes];

    int lenPrimarioCompleto = 0;
    IntegrantesFamilia vecPrimarioCompleto[lenPrimarioCompleto];

    int maxCantidadIntegrantesDepto = 0;
    string maxDomicilioDepto;

    float porcentajeAnalfabetos = 0;
    int cantidadAnalfabetos = 0;
    int cantidadAnalfabetosA = 0;

    int i = 1;

    int lenIntegrantesAnt = 0;

    cout << "Ingrese la cantidad de casas: " << endl;
    cin >> cantidadCasas;

    for (int i = 1; i <= cantidadCasas; i++)
    {
        cout << "Ingrese la cantidad de integrantes de la casa numero:  " << i << endl;
        cin >> vecFamilia[lenFamilia].cantidadIntegrantes;
        // while (cantidadIntegrantes != 0)
        // {
        cout << "Ingrese el domicilio: " << endl;
        cin >> vecFamilia[lenFamilia].domicilio;
        cout << "Ingrese el tipo de vivienda: " << endl;
        cin >> vecFamilia[lenFamilia].tipoVivienda;

        for (int j = 0; j < vecFamilia->cantidadIntegrantes; j++)
        {
            lenIntegrantesAnt = lenIntegrantes;
            cout << "Ingrese el nombre: " << endl;
            cin >> vecIntegrantesFamiliar[lenIntegrantes].nombre;
            cout << "Ingrese el apellido: " << endl;
            cin >> vecIntegrantesFamiliar[lenIntegrantes].apellido;
            cout << "Ingrese la edad: " << endl;
            cin >> vecIntegrantesFamiliar[lenIntegrantes].edad;
            cout << "Ingrese el sexo: " << endl;
            cin >> vecIntegrantesFamiliar[lenIntegrantes].sexo;
            cout << "Ingrese el nivel educativo: " << endl;
            cin >> vecIntegrantesFamiliar[lenIntegrantes].nivelEstudiosAlcanzados;
            cout << "Ingrese el indicador C = Completo o I = Incompleto" << endl;
            cin >> vecIntegrantesFamiliar[lenIntegrantes].estudiosCompletos;

            

            if (vecIntegrantesFamiliar[lenIntegrantes].edad> 10 && vecIntegrantesFamiliar[lenIntegrantes].nivelEstudiosAlcanzados == "N")
            {
                cantidadAnalfabetos++;
            }

            if (vecFamilia[lenFamilia].cantidadIntegrantes > maxCantidadIntegrantesDepto)
            {
                maxCantidadIntegrantesDepto = vecFamilia[lenFamilia].cantidadIntegrantes;
                maxDomicilioDepto = vecFamilia[lenFamilia].domicilio;
            }

            lenIntegrantes++;
        }

        lenFamilia++;

        if (vecIntegrantesFamiliar[lenIntegrantesAnt].nivelEstudiosAlcanzados == "P" && vecIntegrantesFamiliar->estudiosCompletos == "C")
        {

            vecPrimarioCompleto[lenPrimarioCompleto] = vecIntegrantesFamiliar[lenIntegrantesAnt];
            lenPrimarioCompleto++;
        }

        cout << "0 para pasar a la proxima casa " << endl;
        cin >> vecFamilia->cantidadIntegrantes;
        // }
    }

    cout << "La casa con mayor cantidad de integrantes es: " << endl;
    cout << "Domicilio: " << maxDomicilioDepto << endl;
    cout << "Cantidad de integrantes: " << maxCantidadIntegrantesDepto << endl;

    for (int c = 0; c < lenPrimarioCompleto; c++)
    {
        cout << "Nombre: " << vecPrimarioCompleto[c].nombre << endl;
        cout << "Apellido: " << vecPrimarioCompleto[c].apellido << endl;
        cout << "Edad: " << vecPrimarioCompleto[c].edad << endl;
        cout << "Sexo: " << vecPrimarioCompleto[c].sexo << endl;
        cout << "Nivel de estudios: " << vecPrimarioCompleto[c].nivelEstudiosAlcanzados << endl;
        cout << "Estudios completos: " << vecPrimarioCompleto[c].estudiosCompletos << endl;
    }

    return 0;
}