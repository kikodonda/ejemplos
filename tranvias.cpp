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
//#include <ctime>

using namespace std;

// Definimos las constantes, en este caso datos del convenio colectivo
// Variables que no cambiaran hasta que no haya un nuevo convenio
const int mins_pausa = 15; // Tiempo de pausa diario
const int mins_cd = 15; // Corte de descanso
const int jornada_diaria = 453; // Jornada diaria en minutos (7h33m)
const int correcion_diaria = 465; // Correcion diaria en minutos para el computo trimestral (7h45m)

struct Time
{
  int hours;
  int mins;

  int ToMinutes() const
  { return hours * 60 + mins; }
};

istream & operator>>(istream& is, Time & time)
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

// Calculamos el tiempo total
// A tener en cuenta que si la hora de salida es por encima de las 0:00h
// Hay que sumarle 24h (1440 mins) y restarlo
    int total_mins;
    if (mins_salida < mins_entrada)
    	total_mins = (mins_salida + 1440) - mins_entrada;
    else
    	total_mins = mins_salida - mins_entrada;

    //Caluclamos el resto de concetos
    int mins_trimestral, mins_extras, total_diario;
    total_diario = (total_mins - mins_pausa - mins_cd);

/* Si el total trabajado, descontados los tiempos de pausa y descanso, es mayor que 7:45
 * entonces son +12 minutos en el computo trimestral, si es menor que la correcion pero mayor
 * que la jornada diaria (7:33), entonces se resta el trabajado menos la jornada diaria y si
 * es menor que la jornada diaria, entonces la jornada menos lo trabajado. Ej:
 * trabajado 8:00 --> seria +12 minutos
 * trabajado 7:40 --> seria +7 minutos
 * trabajado 7:30 --> seria -3 minutos
 */
    if (total_diario >= correcion_diaria) {
            	mins_trimestral = 12;
          		mins_extras = total_diario - correcion_diaria;
          		}
          		else if (total_diario < correcion_diaria && total_diario > jornada_diaria){
          				mins_trimestral = correcion_diaria - total_diario;
          				mins_extras = 0;
        }
          		else if (total_diario < jornada_diaria) {
          				mins_trimestral = jornada_diaria - total_diario;
          				mins_extras = 0;
          		}
    /*
          		else
            		mins_trimestral = 12;
            		mins_extras = total_diario - correcion_diaria;
*/
// mostramos los datos obtenidos
    int total_mins2 = total_mins % 60;
    int total_horas2 = total_mins / 60;
    cout << "Su jornada de trabajo es de: " << total_mins << " minutos ";
    cout << "que serian " << total_horas2 << " horas " << "y " << total_mins2 << " minutos \n";
    cout << "Con " << mins_trimestral << " minutos de computo trimestral\n";
    cout << "Con " << mins_pausa << " minutos de pausa \n";
    cout << "Con " << mins_extras << " minutos de horas extraordinarias\n";

    return 0;
}

/*
 Array  Para imprimir la suma de los valores contenidos en los primeros tres elementos del arreglo c, escribiríamos lo siguiente:
 cout << c[ 0 ] + c[ 1 ] + c[ 2 ] << endl; Para dividir el valor de c[ 6 ] entre 2 y asignar el resultado a la variable x, escribiríamos lo siguiente:
 x = c[ 6 ] / 2;
*/