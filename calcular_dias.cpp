//DETERMINAR LA CANTIDAD DE DIAS QUE PASARON HASTA LA FECHA.

// Me da error no se exactamente si es por la libreria Glib

#include <iostream>
using namespace std;

int main()
{
    int m,a;
cout<<"Ingrese mes y a"<<char(164)<<"o"<<endl;
cin>>m>>a;

    if((a%4)==0) cout<<"365 dias"<<endl;
    else
        cout<<"364 dias"<<endl;

    cin.ignore(); return 0;
}