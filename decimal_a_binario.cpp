/*
Pasar de decimal a binario en C++
Programa C++ para pasar de decimal a binario. El programa pide un número por teclado en base decimal y calcula y muestra su equivalente en binario.
*/

//Pasar de decimal a binario en C++
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
    system("pause");
}
