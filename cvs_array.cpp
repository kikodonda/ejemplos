/*
Intentando entender la lecurar de un archivo a una matrix multidimensional
*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <vector>

using namespace std;
struct ticket
{
    int fecha;
    double apertura;
    double alto;
    double bajo;
    double cierre;
    double ajuste_cierre;
    double volumen;
};

int main()
{
    ticket cotizacion;
    ifstream lectura;
    lectura.open("ibex.csv");

    for (std::string linea; std::getline(lectura, linea);)
    {
        std::string registro(linea);
        std::string dato;

        for (int columna = 0; std::getline(registro, dato, ','); ++columna)
        {
            switch (columna)
            {
            case 0; // FECHA
                cotizacion.fecha = std::stoi(dato);
            break;
            case 1; // apertura
                cotizacion.apertura = std::stod(dato);
            break;
            case 2; // alto
                cotizacion.alto = std::stod(dato);
            break;
            case 3; // bajo
                cotizacion.bajo = std::stod(dato);
            break;
            case 4; // cierre
                cotizacion.cierre = std::stod(dato);
            break;
            case 5; // ajuste_cierre
                cotizacion.ajuste_cierre = std::stod(dato);
            break;
            case 6; // volumen
                cotizacion.volumen = std::stod(dato);
            break;
         
            }
        }
     {
        std::cout << dato << '\t';
    }
    std::cout << '\n';
}