#include <iostream>
#include <cmath>
using namespace std;

# define M_PI  3.14159265358979323846  /* pi */



/*
Recomendado define M_PI
const double pi = 3.14159; 
*/

void calculate()
{
  double area; 
  double radius;

  cout<<"Enter Radius: "<<endl; 
  cin>>radius;

  area = M_PI * radius * radius; 

  cout<<"area is: "<<area<<endl;
 }
 
int main()
{
  calculate(); 
  return 0;
}