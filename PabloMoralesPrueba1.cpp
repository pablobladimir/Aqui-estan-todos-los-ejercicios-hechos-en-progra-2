#include <iostream>

using namespace std;
/*
Ingresar un numero y determinar cuantas cifras tiene, evaluar hasta 4 cifras y luego decir tiene mas de 4 cifras
No tiene que importar el signo se avaluara el valor absoluto

<------------------------------------------------------->
       0      9         99          999        9999
*/



int main(){
int numero, una, dos, tres, cuatro;char n[100];
cout<<"Ingrese el numero..........: ";
cin>>numero;
if(numero>0 and numero<=9)
   {

    cout<<"Este numero tiene Una cifra"; }
if(numero>=10 and numero<=99)
   {

    cout<<"Este numero tiene Dos cifras"; }
if(numero>=100 and numero<=999)
   {

    cout<<"Este numero tiene Tres cifras"; }
if(numero>=1000 and numero<=9999)
  {

    cout<<"Este numero tiene Cuatro cifras"<<numero<<"\n";}





return 0;}


