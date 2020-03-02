#include <iostream>/*Librería, in out stream que se usa para las lineas cout y cin*/
//#include <windows.h>/*Librería específico de Windows que contiene las funciones Windows API*/
#include <locale.h>/*Librería para establecer la configuración regional actual*/
using namespace std;
int suma(int, int);/*Se declara la función suma*/

/*Todo lo que está en el main se va a ejecutar*/
int main(){
    setlocale(LC_CTYPE, "Spanish");/*Para poder utilizar los acentos*/
    int num1, num2;/*Se declara los campos que digitará el usuario*/

    cout<<"Escriba el primer número: ";
    cin>> num1;

    cout<<"Escriba el segundo número: ";
    cin>> num2;

    cout<<"La suma es: "<< suma(num1, num2)<<"\n";/*Llama a la función y envía los 2 números*/
    system("pause");/*Congela el resultado para que puedas verlo*/
}

/*Función suma que recibe los dos números y retorna el total de la suma*/
int suma(int a, int b){
    int c;/*Declaro "c" privada para la función*/
    c = a + b;
    return c;
}


//No se porque la funcion suma la pone fuera del main  