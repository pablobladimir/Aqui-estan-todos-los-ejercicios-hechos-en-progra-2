#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
Generar 10 numeros, usted debe indicar el limite inferior
y el superior luego debera de pbtener el promedio de los pares e impares de los numeros
ingresados
*/
int main()
{  int num, li, ls, cp, ci, sp, si, ppares, pimpares, conta;
   srand(time(0));

   cout<<"ingresar limite inferior.....:";
   cin>>li;

   cout<<"Igresar el limite superior....:";
   cin>>ls;

   conta=0; cp=0; sp=0;ci=0; si=0;

   while (conta<10)
   {
       conta++;
       num = li + rand()%((ls+1)-li);

       if (num%2==0)
       {
           cp++;
           sp+=num;
       }
    else
        {
            ci++;
                si+=num;
        }
   }
    //calcular los promedios
    ppares= sp/cp;
    pimpares= si/ci;

    cout<<"promedio de Impares es :"<<pimpares<<"\n";
    cout<<"Promedio de pares es :"<<ppares<<"\n";
}
