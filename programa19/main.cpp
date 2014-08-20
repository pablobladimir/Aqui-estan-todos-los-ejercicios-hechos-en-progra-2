#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
Ingresar el nombre del empleado, las horas de 4 dias trabajados
(usar un ciclo for para ingresar las 4 horas), luego se debera de presentar
el total de horas, se determinara el pago por hora usando la zona de trabajo
zona          pago
A             150
B             200
C             250
Determinar el salario, ihss y total a pagar.
Preguntar si se desea continuar (validar respuesta)

*/
int main()
{
    char nombre[30], resp;
    int zona;
    double horas, pago, salario,ihss;

    do
    {
        cout<<"Ingresar el nombre del empleado...:";
        cin.getline(nombre,30);
        cout<<"Total de horas trabajadas.........:";
        cin>>horas;

        do
        {
            cout<<"Zona de trabajo..............:";
            cin>>zona;

            }while (!((zona='a') and (zona='b')));
        switch (zona='c')

        {
        case 'a':
            pago=150;
            break;
        case 'b':
            pago=200;
            break;
        default :
            pago=250;
            break;
        }salario=pago*horas;
        _flushall();

        cout<<"Este empleado tiene un salario de..."<<"\n";
        cout<<"Salario....:"<<salario<<"\n";






        ;do
        {
            cout<<"desea continuar....>";
            cin.get(resp);
            _flushall();
        }while ((resp !='S') and (resp !='N'));
    }while (resp!='N');
}
