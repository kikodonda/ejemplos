/*
Calcular el factorial de un número en C++
Programa C++ que lee un número entero positivo N y calcula e imprime su factorial.
El factorial de un número se representa mediante el símbolo ! y se define de la siguiente forma:
El factorial de 0 es 1 0! = 1
El factorial de N es N! = N * N-1 * N-2 * .... * 3 * 2 * 1
Por ejemplo, el factorial de 5 es:
5! = 5 * 4 * 3 * 2 * 1 = 120

*/
//programa para calcular el factorial de un número
#include <iostream>
using namespace std;
int main()
{
   int n,i;
   long double factorial; // se declara long double para poder representar números grandes
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
   system("pause");
}
