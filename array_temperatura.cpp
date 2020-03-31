#include <cstdio>
#include <iostream>
#include <stdlib.h>


using namespace std;

main()
{
    //El tamaño de la tabla o matriz será de 10 filas y 3 columnas
    int matriz[10][3];
    int col[3];
    int arreglo[10];
    int fila, columna, max, min, dia = 0;
    //Inicio el ciclo for para el ingreso de datos por teclado
    for (fila = 0; fila < 10; fila++)
    {
        for (columna = 0; columna < 1; columna++)
        {
            //Pido al usuario que ingrese la temperatura máxima
            dia = dia++;
            cout << "Control de la Temperatura Maxima y Minima de Flores Peten \n\n";
            cout << "Ingrese la temperatura maxima del dia " << dia << ": ";
            cin >> matriz[fila][columna];
        }
        for (columna = 1; columna < 2; columna++)
        {
            //Pido al usuario que ingrese la temperatura mínima
            cout << "Ingrese la temperatura minima del dia " << dia << ": ";
            cin >> matriz[fila][columna];
        }
       system(“cls”); 
    }
    cout << "Control de la Temperatura Maxima y Minima de Flores Peten \n\n";
    cout << "\n Las temperaturas que usted ingreso fueron:\n\n";
    //encabezado de tabla/matriz
    cout << "\t";
    cout << "Maxima"
            "\t\t"
            "Minima"
            "\t\t"
            "Promedio Diario"
            "\n";
    //fin encabezado de tabla/matriz
    //A continuación recorro las columnas de la Matriz para sumarlas
    for (columna = 0; columna < 2; columna++)
    {
        col[columna] = 0;
        for (fila = 0; fila < 10; fila++)
        {
            col[columna] = col[columna] + matriz[fila][columna];
        }
    }
    //A continuación recorro las filas de la Matriz para sumarlas
    for (fila = 0; fila < 10; fila++)
    {
        arreglo[fila] = 0;
        for (columna = 0; columna < 2; columna++)
        {
            arreglo[fila] = arreglo[fila] + matriz[fila][columna];
        }
        //Guardo el cálculo de la suma "arreglo[fila]" en la matriz, en la columna 3 (promedio diario)
        for (columna = 2; columna < 3; columna++)
        {
            matriz[fila][columna] = arreglo[fila] / 2;
        }
    }
    //Muestro en pantalla las temperaturas ingresadas, es decir todos los datos que se ingresaron por teclado
    for (fila = 0; fila < 10; fila++)
    {
        for (columna = 0; columna < 3; columna++)
        {
            cout << "\t";
            cout << matriz[fila][columna] << "\t";
        }
        cout << "\n";
    }
    //Muestro en pantalla el resultado de la suma de la columna 1 (temperatura máxima)
    for (columna = 0; columna < 1; columna++)
    {
        cout << "\n\nEl Total de las temperaturas maximas es: " << col[columna] << " El promedio es de: " << col[columna] / 10;
    }
    //Muestro en pantalla el resultado de la suma de la columna 2 (temperatura mínima)
    for (columna = 1; columna < 2; columna++)
    {
        cout << "\n\nEl Total de las temperaturas minimas es: " << col[columna] << " El promedio es de: " << col[columna] / 10;
    }
}