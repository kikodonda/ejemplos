/*
Ejemplo 3: pasar una matriz a una función en C++:
Cuando se pasa una matriz (array bidimensional) a una función, en la función no es necesario especificar el tamaño del primer índice (filas), por lo tanto, aparecerán los corchetes correspondientes vacíos.
En la llamada a la función a la que se envía el array, el nombre del array aparecerá solo, sin corchetes ni índices
Programa que lee por teclado los elementos de dos matrices de enteros y crea otra matriz con la suma de las dos. Se usarán tres funciones.
Función leerMatriz que se usará dos veces para leer por teclado los datos de cada matriz.
Función sumarMatrices que realiza la suma de las dos matrices.
Función mostrarResultado que se usa tres veces para mostrar por pantalla las tres  matrices.

*/

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXFIL = 20;
const int MAXCOL = 30;

//declaración de funciones
void leerMatriz(int [][MAXCOL], int, int);
void sumarMatrices(int [][MAXCOL], int [][MAXCOL],
                  int [][MAXCOL], int, int);
void mostrarResultado(int [][MAXCOL], int, int);

int main ()
{   int nfilas,ncols;
    int matriz1[MAXFIL][MAXCOL];
    int matriz2[MAXFIL][MAXCOL];
    int matriz3[MAXFIL][MAXCOL];

    do
    {
      cout<<"\nIntroduce numero de filas. Maximo " << MAXFIL << ": ";
      cin >> nfilas;
    }while(nfilas<=0 or nfilas >MAXFIL);
 
    do
    {
      cout<<"\nIntroduce numero de columnas. Maximo " <<MAXCOL<<": ";
      cin >> ncols;
    }while(ncols<=0 or ncols >MAXCOL);  

    // Lectura de datos de la primera matriz
    cout << "\n Introduce datos de la primera matriz ";
    leerMatriz(matriz1, nfilas, ncols);

    // Lectura de datos de la segunda matriz
    cout << "\n Introduce datos de la segunda matriz ";
    leerMatriz(matriz2, nfilas, ncols);

    // Calcular la suma de las dos matrices
    sumarMatrices(matriz1, matriz2, matriz3, nfilas, ncols);

    // Mostrar el resultado por pantalla
    system("cls");

    cout << "\nmatriz 1:" << endl;
    mostrarResultado(matriz1, nfilas, ncols);

    cout << "\nmatriz 2:" << endl;
    mostrarResultado(matriz2, nfilas, ncols);

    cout << "\nmatriz 3 = matriz1 + matriz2" << endl;
    mostrarResultado(matriz3, nfilas, ncols);

    system("pause");
}

void leerMatriz(int matriz[][MAXCOL], int nf, int nc)
{
    int fila, col;
    for (fila=0; fila < nf; fila++ )
    {
        cout << "\nFila : " << fila+1 << endl;
        for (col=0; col < nc; col++)
        {
            cout << "Elemento : " << col+1 <<": ";
            cin >> matriz[fila][col];
        }
    }
}
void sumarMatrices(int matriz1[][MAXCOL], int matriz2[][MAXCOL],
                  int matriz3[][MAXCOL], int nf,int nc)
{  
    int fila, col;
    for (fila=0; fila < nf; fila++ )
    {
      for (col=0; col < nc; col++)
        matriz3[fila][col]=matriz1[fila][col] + matriz2[fila][col];
    }
}
void mostrarResultado(int matriz[][MAXCOL], int nf, int nc)
{
    int fila, col;
    for (fila=0; fila < nf; fila++ )
    {
        for (col=0; col < nc; col++)
            cout << setw(4) << matriz[fila][col];
        cout << endl;
    }
}
