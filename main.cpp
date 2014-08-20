#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{ char nombre [30]
  double ventas, comis, ihss, pc, tp;
  int turno;
    cout << "ingresar el nombre del Empleado....:" ;
    cin .getline(nombre,30)

    cout << "ventas del mes...." ;
    cin >>ventas;

    cout << "turno del empleado.... " ;
    cin >>turno;

    if (turno==1)
        pc=0.05;
    else if (turno==2)
          pc=0.07;
          else if (turno==3)
          pc=0.09;
    else
        pc=0;
        comis = ventas * pc;
        if (comis>7000)
            ihss = 245;
    tp = comis;

    cout<<"El % de comision .. :"<<pc<<"\n";
    cout<<"Total a pagar "<<tp<<"\n";
    cout<<"comision ganada"<<comis<<"\n";
    cout<<"ihss   :"<<ihss<<"\n";

    cout<<"\n";
    system("PAUSE")

}
