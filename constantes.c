/* La diferencia entre el uso de const y el uso de #define está en que mediante const 
se declara una constante que tiene un tratamiento asemejable a una variable (por ejemplo, 
la constante es de un tipo de dato) mientras que mediante define 
se indica que escribir el nombre especificado equivale a escribir el valor, 
con una correspondencia directa y sin tratamiento análogo al de una variable.
*/
#include <stdio.h>

#define SECRETO 3

const int PREMIO = 6;
int main (void)
{
    int numero;
    printf (" Escriba el numero secreto: ");
    scanf ("%d", &numero);
    fflush (stdin);

    if (numero == SECRETO)
    printf ("\nMuy bien. Has ganado %d puntos.", PREMIO);
    else
    printf ("\nLo siento, no lo has adivinado. Era: %d", SECRETO);
    /*hacemos una pausa hasta que el usuario pulse intro */
    getchar();
}

