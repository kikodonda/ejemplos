#include <iostream>
#include <stdlib.h>

using namespace std;

unsigned long long int fibonacci_iterativo (int n)
{
				  int i = 0;
				  int j = 1;
	
				  for (int k = 1; k < n; k++)
				  {	
					int t;
					t = i + j;
					i = j;
					j = t;
				  }

	return j;
	
};

unsigned long long int fibonacci_recursivo(int n)
{
				  if (n < 2)
	
				     return n;
								
				  else 
							
 return fibonacci_recursivo(n-2) + fibonacci_recursivo(n-1);
};

void imprimir (int n, short opc)
{
	for (int i = 0; i < n; i++)
	{
		if (opc == 1)
			cout << fibonacci_iterativo(i)<<endl;
		else
			if(opc == 2)
				cout << fibonacci_recursivo(i) <<endl;
	}	
	
}

int main()
{	
	int n;
	char r = 's';
	short opc;
	
	do{
		system("clear");
		cout << "¿Qué método de cálculo de la serie fibonacci desea usar?\n";
		cout << "1. Iterativo. \n2. Recursivo. \n: ";
		cin >> opc;
		cout << "¿Cuántos números de la serie deseas ver?: ";
		cin >> n;
		
		switch (opc)
		{
				
		
				case 1 : 
				case 2 : 
						 imprimir(n,opc);
						 break;
		}
						 
	cout << "Otro numero?(s/n): ";
	cin >> r;
			
	}while(r == 's' || 'S');
	
	return 0;
}