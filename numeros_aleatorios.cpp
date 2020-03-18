/*
Generar Números Aleatorios en C++
Para generar números aleatorios en C++ se utilizan las funciones rand y srand.

Función rand()
int rand(void);
La función rand calcula un número aleatorio en el intervalo entre 0 y RAND_MAX. 
El valor de RAND_MAX es una constante predefinida que representa el mayor valor que puede devolver la función rand. 
En Dev-C++ este valor es 32767.
Ejemplo: Programa C++ que genera 20 números aleatorios.

*/

#include <iostream>
using namespace std;
int main()
{
   int i;
   cout << "20 numeros generados aleatoriamente:\n";
   for(i=1; i<=20; i++)
           cout << rand() << endl;
   system("pause");
}