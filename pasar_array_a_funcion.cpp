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
