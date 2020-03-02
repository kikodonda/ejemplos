// Declaracion de globales

#include <stdio.h>

#define SECRETO 3

int main (void)
{
    int numero;
    printf ("Escriba el numero secreto entre 1 y 10");
    scanf ("%d, &numero");
    fflush (stdin);

    if (numero == SECRETO)
    printf ("\nMuy bien, lo has adivinado");
    else 
    printf ("\nLo siento, no lo has adivinado. Era: %d, SECRETO");

    // Hacemos una pausa hasta que el usuario pulse Intro 
    getchar();

}