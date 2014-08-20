#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void ingresar_limits(int &inicio, int &ultimo)
{

    do
    {
        cout<<"Limite Inferior: ";
        cin>>inicio;
        cout<<"Limite Superior: ";
        cin>>ultimo;
    }
    while(inicio>ultimo);
}

int generarNumero(int inicio, int ultimo)
{
    int numero;
    srand(time(0));// generar una nueva semilla
    numero = inicio + rand()%(ultimo-inicio);
    return numero;
}


int suma(int num)
{
    int c,numx;
    c=0;
    while (num>0)
    {
        numx= num % 10;
        if (num%5==0)
        {
            c+=numx;
        }

        num= num/10;

    }
    return c;
}

void presentar(int num)
{
        cout<<num;
}

int num_mayor(int num)
{

    int mayor=0,numx;
    while (num>0)
    {
        numx= num % 10;
        if (numx>mayor)
        {
            mayor=numx;
        }

        num= num/10;

    }
    return mayor;

}

int main()
{
    int cont=0;
    int  mayor=0, num;
    int inicio, ultimo;
    ingresar_limits(inicio, ultimo);
    while(cont<5)
    {

        num=generarNumero(inicio, ultimo);
        int sumaC= suma(num);
        cout<<"La suma es: "<<sumaC<<endl;
        cout<<"Los digitos son: ";
        presentar(num);
        mayor=num_mayor(num);
        cout<<"Digito mayor: "<<mayor;
        num=0;
        cont++;
    }
    return 0;
}
