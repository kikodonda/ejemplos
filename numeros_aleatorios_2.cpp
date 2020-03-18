/*
La función rand genera números a partir de un valor inicial o semilla. Si ejecutamos el programa anterior varias veces seguidas 
obtendremos siempre la misma secuencia de números. Para que esto no se produzca debemos cambiar el valor inicial de la semilla 
cada vez que se ejecute el programa. Esto se hace con la función srand.
Función srand()
void srand(unsigned int semilla);
La función srand fija el punto de comienzo para generar números aleatorios. El generador de números aleatorios obtiene los números 
en función del valor de su argumento. Cuando esta función no se utiliza, el valor del primer número generado siempre es el mismo 
para cada ejecución (corresponde a un argumento de valor 1).
Para obtener números aleatorios mediante estas funciones, es recomendable utilizar como semilla un valor que cambie constantemente, 
como por ejemplo, el valor devuelto por la función time (librería ctime). Esta función devuelve el número de segundos transcurridos 
desde las 0 horas del 1 de Enero de 1970.
Podemos comprobar el funcionamiento modificando el ejemplo anterior para que genere números diferentes en cada ejecución:
*/

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
   srand(time(NULL));
   int i;
   cout << "20 numeros generados aleatoriamente:\n";
   for(i=1; i<=20; i++)
          cout << rand() << endl;
   system("pause");
}