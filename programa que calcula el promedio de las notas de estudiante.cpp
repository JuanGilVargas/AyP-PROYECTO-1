/******************************************************************************
Programa que calcula el promedio de las notas de un estudiante
Autor: Juan Andrès Gil Vargas
Fecha: 30/03/2021
Compilado en GDB Online
*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3,n4;
    float promedio;
    
    cout<<"Ingrese la nota 1 --> ";
    cin>> n1;
    cout<<"Ingrese la nota 2 --> ";
    cin>> n2;
    cout<<"Ingrese la nota 3 --> ";
    cin>> n3;
    cout<<"Ingrese la nota 4 --> ";
    cin>> n4;
    promedio = (n1+ n2+ n3+ n4) / 4;
    cout<<"El promedio de las notas del estudiante es --> " <<promedio;

    return 0;
}
