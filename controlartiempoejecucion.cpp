#include <iostream>
#include <ctime>
using namespace std;

unsigned t0, t1;
// Ejempllo codigo controlar tiempo de ejecucion

int main  (){

t0=clock();
cout <<  "Ahiii anitaaa" << endl;
t1 = clock();
 
double time = (double(t1-t0)/CLOCKS_PER_SEC);
cout << "Execution Time: " << time << endl;

return 0;
}