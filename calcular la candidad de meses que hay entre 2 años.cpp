/******************************************************************************
Programa que calcula la cantidad de meses que hay entre 2 años
Autor: Juan Andrès Gil Vargas
Fecha: 30/03/2021
Compilado en GDB Online

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int ano_1,ano_2;
    int meses;
    
    cout<<"Ingrese el año 1  --> ";
    cin>> ano_1;
    cout<<"Ingrese el año 2  --> ";
    cin>> ano_2;
    meses = (ano_2 - ano_1) * 12;
    cout<< "La cantidad de meses entre esos 2 años es --> " <<meses;

    return 0;
}
