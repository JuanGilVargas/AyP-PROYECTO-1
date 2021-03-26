/******************************************************************************

Programa que calcula la velocidad de una particula
Desarrollado online
Autor: Juan Andrees Gil Vargas
Fecha: Marzo 26/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{   float tiempo,distancia;
    float velocidad;
    cout << "Ingrese distancia recorrida --> ";
    cin >> distancia;
    cout << "Ingrese tiempo              --> ";
    cin >> tiempo;
    
    velocidad = distancia/ tiempo;
    cout << "La velocidad de la particula es ---> " << velocidad << "Mts/Seg";

    return 0;
}


