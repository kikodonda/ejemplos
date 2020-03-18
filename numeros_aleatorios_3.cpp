/*

Para generar números aleatorios entre dos límites DESDE – HASTA utilizaremos la siguiente expresión:
numero = aleatorio = rand()%(HASTA-DESDE+1)+DESDE;
Ejemplo: Programa C++ que genera números aleatorios entre 4 y 10. La cantidad de números a generar se pide por teclado

*/

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
   srand(time(NULL));
   int i, n, aleatorio, DESDE=4, HASTA=10;
   cout << "Numeros aleatorios entre " << DESDE << " y " << HASTA << endl;
   cout << "Cuantos numeros aleatorios quiere generar? ";
   cin >> n;
   for (i = 1; i <= n; i ++)
   {
             aleatorio = rand()%(HASTA-DESDE+1)+DESDE;
             cout << aleatorio << " ";
   }
   cout << endl;
   system("pause");
}
