#include <iostream> // permite al programa realizar operaciones de entrada y salida
int main()
{

float Cal_Iva;
float precio;
float iva = 0.10;

std::cout << "Escriba el precio a calcular IVA: "; 
std::cin >> precio;

Cal_Iva = precio * iva;
std::cout << "El IVA del precio es " << Cal_Iva << std::endl;
return 0;
}