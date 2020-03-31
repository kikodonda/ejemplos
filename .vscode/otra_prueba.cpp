#include <iostream>
using namespace std;
int main()
{
    int i, j; // declaro variables por defecto i filas, j columnas
    int matriz_horas[7][2] =  // declaro la matriz y su tamaño 7 filas y 2 columnas
        { 
            {456, 457},
            {458, 459},
            {460, 461},
            {462, 463},
            {464, 465},
            {466, 467},
            {468, 469}
        };

    for (int i = 0; i < 7; i++) // recorro las filas
    {
        for (int j = 0; j < 2; j++) // recorro las columnas 
        {
            cout << matriz_horas[i][j] << " "; // y muestro i y j
        }
        cout << endl;
    }
    
    return 0;
}