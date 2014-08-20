#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
/*
Generar un Numero entre creo y 100 usando una funcion, luego elaborar una funcion
que nos devuelva la respuesta validada de S o N
Pedir los numeros y presentar la suma.
*/

int num, suma, mayor;
char resp;
int aleatorio1_100()
{
    int num;
    srand(time(0));// generar nueva semilla
    num=1+rand()%(101-1);
    return num;
}

char pedirrespuesta()
{
    char respx;
    do{
        cout<<"Desea continuar?...";
        cin.get(respx);
        _flushall();
    } while ((respx !='S') and (respx!='S'));
    return respx;
}
void sumanum(int num, int &suma)
{
    suma +=num;
}

int maximo(int num, int mayor)
{
    if (num>mayor)
    {
        return num;
    }
    else
    {
        return mayor;
    }
}

using namespace std;

int main()
{ suma=0;
mayor=0;
    do
    {
        num= aleatorio1_100();
        cout<<"Numero generado es "<<num<<"\n";

        resp = pedirrespuesta();
        sumanum(num,suma);
        mayor = maximo(num,mayor);

    }while (resp!='N');
    cout<<"Suma de los numeros mayores es.....:"<<suma<<"\n";
    cout<<"Mayor es "<<mayor<<"\n";
}
