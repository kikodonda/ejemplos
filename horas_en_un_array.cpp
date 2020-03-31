//============================================================================
// Name        : tranvias.cpp
// Author      : Kiko Donda
// Version     : 1.0.0
// Copyright   : GNU GPL
// Description : Calculo Jornada
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Time
{
    int hours;
    int mins;

    int ToMinutes() const
    {
        return hours * 60 + mins;
    }
};

istream &operator>>(istream &is, Time &time)
{
    char sep;
    is >> time.hours >> sep >> time.mins;
    return is;
}

int main()
{
    // Calculamos Entrada
    Time entrada, salida;
    cout << "Introduce hora de entrada: \n";
    cin >> entrada;
    int mins_entrada = entrada.ToMinutes();
    cout << "Introduce hora de salida: \n";
    cin >> salida;
    int mins_salida = salida.ToMinutes();

    int i, j;
    float matriz_horas[7][2] ={{456, 456}, {456, 456}, {456, 456}, {456, 456}, {456, 456}, {456, 456}, {456, 456}};

    //double matriz[7][2];
    //double matriz_horas[] = {2.3, 8.5, 3.2, 9.5, 4, 5.5, 7.0}; //array de 7 elementos
    //cout << fixed << setprecision(2);
    for (i = 0; i < 7; i++)
        cout << matriz_horas[i] << " "; //se muestra cada elemento del array
    for (j = 0; j < 7; j++)
        cout << matriz_horas[j] << " "; //se muestra cada elemento del array
    cout << endl;
    //system("pause");
    return 0;
}