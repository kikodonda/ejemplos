/* Fuente http://ejercicioscpp.blogspot.com/2013/11/pasar-array-a-funcion-parametro-c.html?m=1

Para pasar un array a una función:
-         En la función se debe declarar el parámetro como un array del tipo adecuado. En los arrays unidimensionales no es necesario especificar 
          el tamaño  por lo tanto aparecerán los corchetes vacíos.
-         En la llamada a la función a la que se envía el array, el nombre del array aparecerá solo, sin corchetes ni índices
Los arrays en C++ se pasan siempre a las funciones por referencia. El nombre de un array realmente es un puntero que contiene 
la dirección de memoria donde comienza el array, o lo que es lo mismo, la dirección de memoria del primer elemento. Cuando se 
pasa un array a una función, la función recibe la dirección de memoria donde se encuentra el primer elemento del array. Por lo 
tanto, la función trabaja sobre el array original.
No es necesario utilizar el operador & en el paso de arrays a funciones para indicar que se hace por referencia ya que siempre pasan por referencia.
Una función en C++ no puede devolver un array mediante la instrucción return.

*/
#include <iostream>
using namespace std;
void intercambia(int []); //declaración de la función.
                         //No es necesario poner el nombre del array
int main()
{
   int A[2]={3,5};
   intercambia(A); //en la llamada sólo se escribe el nombre
                   //del array, sin corchetes
   cout << A[0] << " " << A[1] << endl; //muestra 5 3
   system("pause");
}
void intercambia(int a[]) //definición de la función
{                            
   int c;                   
   c=a[0];
   a[0]=a[1];
   a[1]=c;
}
