#include <iostream>

using namespace std;
/*
Ingresar un numero entero , luego  sumar los dígitos  que tiene el numero, contar cuantos son pares e impares y obtener el promedio de los dígitos del numero.
ejemplo
257
Promedio 7
pares 1
impares 2
Suma 14
*/
int main()
{
    int numero, cifra, suma=0, cont_imp=0, cont_par=0, veces=0;

    cout << "Ingresar Numero...:";
    cin>>numero;
cout<<"\nNumero al reves: ";
    while (numero>0)
    {
        cifra=numero % 10;
        cout<<cifra;

        if(cifra%2==0)
            cont_par++;
        else
            cont_imp++;

        numero= numero/10;

        suma+= cifra;
    veces++;
    }

    cout<<"\n#Pares: "<<cont_par;
    cout<<"\n#Impares: "<<cont_imp;
    cout<<"\nLa suma delos digitos es: "<<suma;
    cout<<"\nEl promedio es: "<<suma/veces;
}
