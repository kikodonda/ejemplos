/*
Fibonacci en C++
Programa C++ que calcula la serie de Fibonacci. La serie se define de la siguiente forma:
Los dos primeros términos son 1, 1
El resto de términos se calculan como la suma de los dos anteriores:
1, 1, 2, 3, 5, 8, 13, 21, 34, …..
El programa muestra los N primeros términos de la serie de Fibonacci. El valor de N se pide por teclado.
*/

//N primeros términos de la serie de fibonacci
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero,fibo1,fibo2,i;
   do
   {
         cout << "Introduce numero mayor que 1: ";
         cin >> numero;
   }while(numero<=1);
   cout << endl;
    cout << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
   fibo1=1;
   fibo2=1;
   cout << fibo1 << " ";
   for(i=2;i<=numero;i++)
   {
       cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
   }
   cout << endl << endl;
    system("pause");
}