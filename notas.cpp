#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float notas[20];   //array de NUMALUM elementos tipo float
    int i = 0;           
    float suma = 0, media;  

    // Entrada de datos. Se asigna a cada elemento del array
    // la nota introducida por teclado
    for (i=0; i<20; i++)
    {
        cout << "Alumno " << i+1 << " Nota final: ";
        cin >> notas[i];
    }

    // Sumar todas las notas
    for (i=0; i<20; i++)
         suma = suma + notas[i];

    // Calcular la media
    media = suma / 20;

    // Mostrar la media
    cout << fixed << setprecision(2);
    cout << endl<< endl << "Nota media del curso: " << media << endl;
   
    // Mostrar los valores superiores a la media
    cout << "Listado de notas superiores a la media" << endl;
    cout << "--------------------------------------" << endl;
    for (i=0; i<20; i++)
        if (notas[i] > media)
        {
            cout << "Alumno numero " << setw(3) << i+1;
            cout << " Nota final: " << notas[i] << endl;
        }
    cout << endl;
//    system("pause");
	return 0;
}

