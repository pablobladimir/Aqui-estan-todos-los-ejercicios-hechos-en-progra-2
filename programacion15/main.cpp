#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
Ingresar un numero hasta que el usuario diga que no quiere ingresar mas numeros
*/
int main()
{
    int num;
    char resp;
    int mayor=0;
    do
    {
       cout<<"Ingresar un numero..: ";
       cin>>num;
       _flushall();
       if (mayor<num)
       {
           mayor=num;
       }
       do
       {cout<<"Desea continuar?....>";
       cin.get(resp);
    }while ((resp != 'S') and (resp != 'N'));
    _flushall();

}while (resp!='N');
cout<<"El numero mayor es....."<<mayor<<"\n";
}
