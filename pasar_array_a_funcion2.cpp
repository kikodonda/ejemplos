/*

Ejemplo 2 de paso de arrays a funciones en C++:
En este ejemplo se leen las estaturas de los alumnos de una clase y se realizan con ellos distintos cálculos.
Se utilizan las siguientes funciones:
Función leer: Lee por teclado las estaturas de los alumnos y las guarda en el array.
Función estatura_media: recibe el array y calcula y devuelve la estatura media.
Función max_min: Calcula y devuelve la estatura mayor y la menor. Recibe el array y los dos parámetros donde devolver la estatura mayor y la menor.
Función cuantos_mayor_menor_media: Calcula y devuelve cuantos alumnos hay con estatura mayor que la media y cuántos con estatura menor. Recibe el array de estaturas, la estatura media y los parámetros donde devolver los resultados.
Función mostrar_resultados: recibe el array y todos los datos calculados y los muestra por pantalla. Solo el array pasa por referencia (por defecto), los demás parámetros pasan por valor.

*/
#include <iostream>
#include <iomanip>
using namespace std;

//declaración de funciones
void leer(double []);
double estatura_media(double []);
void max_min(double [], double &, double &);
void cuantos_mayor_menor_media(double [], double, int &, int &);
void mostrar_resultados(double [], double, double, double, int, int);

int main()
{
   double estaturas[10], media, mayor, menor;
   int cont_mas = 0, cont_menos = 0;
   leer(estaturas);
   max_min(estaturas,mayor,menor);
   media = estatura_media(estaturas);
   cuantos_mayor_menor_media(estaturas,media,cont_mas,cont_menos);
   mostrar_resultados(estaturas,media,mayor,menor,cont_mas,
                      cont_menos);
   system("pause");
}
void leer(double a[])
{
     int i;
     cout << "Lectura de las estaturas de los alumnos:" << endl;
     for(i=0; i<10; i++)
     {
         cout << "Alumno " << i+1 << ": ";
         cin >> a[i];
     }
}
double estatura_media(double a[])
{
     double media = 0;
     int i;
     for(i=0; i<10; i++)
     {
         media = media + a[i];
     }
     media = media / 10;
     return media;
}
void max_min(double a[], double &max, double &min)
{
     int i;
     max = min = a[0];
     for(i=1; i<10; i++)
     {
         if(a[i]>max)
            max = a[i];
         else if(a[i]<min)
                 min = a[i];
     }
}
void cuantos_mayor_menor_media(double a[], double media,
                              int &mayores_media, int &menores_media)
{
     int i;
     for(i=0; i<10; i++)
     {
         if(a[i]>media)
            mayores_media++;
         else if(a[i]<media)
                 menores_media++;
     }
}
void mostrar_resultados(double a[], double media, double mayor,
                  double menor, int mayores_media, int menores_media)
{
     int i;
     system("cls");
     cout << fixed << setprecision(2);
     cout << "Estatura de los alumnos de la clase" << endl;
     cout << "-----------------------------------" << endl;
     for(i=0; i<10; i++)
     {
         cout << "Alumno " << setw(4) << i+1 << ": " << a[i] << endl;
     }
     cout << "Mayor estatura: " << mayor << endl;
     cout << "Menor estatura: " << menor << endl;
     cout << "Estatura media: " << media << endl;
     cout << "Hay " << mayores_media << " alumnos con estatura ";
     cout << "superior a la media" << endl;
     cout << "Hay " << menores_media << " alumnos con estatura ";
     cout << "inferior a la media" << endl << endl;
}