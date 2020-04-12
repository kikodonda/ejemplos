// Programa de suma que muestra la suma de dos enteros.
#include <iostream> // permite al programa realizar operaciones de entrada y salida
// la función main empieza la ejecución del programa
int main()
{
// declaraciones de variables
int numero1; // primer entero a sumar
int numero2; // segundo entero a sumar
int suma; // suma de numero1 y numero2
// modificacion mia
int resta;
int multiplicacion;
float division;
// hasta aqui
std::cout << "Escriba el primer entero: "; // pide los datos al usuario
std::cin >> numero1; // lee el primer entero del usuario y lo coloca en numero1
std::cout << "Escriba el segundo entero: "; // pide los datos al usuario
std::cin >> numero2; // lee el segundo entero del usuario y lo coloca en numero2
suma = numero1 + numero2; // suma los números; almacena el resultado en suma
// añado mas
resta = numero1 - numero2;
multiplicacion = numero1 * numero2;
division = numero1 / numero2;
std::cout << "La suma es " << suma << std::endl; // muestra la suma; fin de línea
std::cout << "La resta es " << resta << std::endl;
std::cout << "La multiplicacion es " << multiplicacion << std::endl;
std::cout << "La division es " << division << std::endl;
return 0; // indica que el programa terminó correctamente
} // fin de la función main