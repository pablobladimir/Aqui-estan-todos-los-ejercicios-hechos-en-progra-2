#include <iostream>

using namespace std;

int main()
{
    int dia, mes, anio;
    cout<<"----Ingrese una fecha----\n";
    cout<<"Año: ";
        cin>>anio;
    cout<<"\nMes: ";
    cin>>mes;
    cout<<"\nDia: ";
    cin>>dia;
    if(anio>0)
    {

        if(mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12 and dia==31)
        {
            cout<<"Fecha Correcta...!";

        }
        else if(mes==4 or mes==6 or mes==9 or mes==11 and dia==30)
        {
            cout<<"Fecha Correcta...!";

        }
        else if(mes==2 and (dia==28 or dia==29))
        {
            cout<<"Fecha Correcta...!";

        }
        else
        {
            cout<<"Fecha Incorrecta...!";
        }


    }
    else
    {
        cout<<"El año debe ser mayor que CERO...";

    }



    return 0;
}
