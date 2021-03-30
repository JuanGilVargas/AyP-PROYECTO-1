/******************************************************************************
Programa que calcula el interes generado por un capital depositado
Autor: Juan Andrès Gil Vargas
Fecha: 30/03/2021
Compilado en GDB Online

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float capital,numero_periodos,tasa;
    float monto,r,interes;
    
    cout<<"Ingrese cuanto capital depositó --> ";
    cin>> capital;
    cout<<"Cual fue el numero de periodos  --> ";
    cin>> numero_periodos;
    cout<<"Cual fue la tasa de interes     --> ";
    cin>> tasa;
    monto = (capital * pow(((1 + (tasa / 100))), numero_periodos));
    r = monto - capital;
    interes = (r * 100) / capital;
    cout<< "El interes generado por el capital depositado es --> " <<interes;

    return 0;
}
