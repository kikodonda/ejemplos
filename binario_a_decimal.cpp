/*
Pasar de binario a decimal en C++
Programa C++ que pasa un número de binario a decimal. El programa pide un número por teclado en base binaria y calcula y muestra su equivalente base decimal.
*/
//Pasar de binario a decimal en C++

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int exp,digito;
    double binario, decimal;
   cout << "Introduce numero: ";
   cin >> binario;
   exp=0;
   decimal=0;
   while(((int)(binario/10))!=0)
   {
           digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/10);
   }
   decimal=decimal + binario * pow(2.0,exp);
   cout << endl << "Decimal: " << decimal << endl;
    system("pause");
}
