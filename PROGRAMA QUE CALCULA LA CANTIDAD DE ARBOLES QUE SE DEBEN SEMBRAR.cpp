/******************************************************************************
PROGRAMA: El Gobierno desea saber el número de cada especie de árbol que tendrá
que sembrar en el bosque
NOMBRES: JUAN ANDRÉS GIL VARGAS, ESTEFANIA CASTRILLON MONSALVE, NICOLÁS CANO BOTERO
DESAROLLADO: DEV C++, GDB ONLINE
FECHA: 10/04/2021

*******************************************************************************/
#include <iostream>
using namespace std;

int main (){
	int numHectareas;
	int barrigon , cacaoIndio , cabezaNegro , ajicillo , arbolesHectarea , supArbol , prMitad , sgMitad;
	int numBarrigon , numCacaoindio , numCabezanegro , numAjicillo;
	
	cout << "Ingrese el numero de hectareas ---> ";
	cin >> numHectareas;
	
	if (numHectareas > 1000000){
		
		supArbol = (2*2);
		arbolesHectarea = 10000 / supArbol;
		numBarrigon = (numHectareas / arbolesHectarea) * 10000;
		
		cout << "El numero de barrigon es de ---> " << numBarrigon;
		
	} 
	
	 if (numHectareas <= 1000000){
		prMitad = numHectareas / 2;
		supArbol = (1*1);
		arbolesHectarea = 10000 / supArbol;
		numCacaoindio = (arbolesHectarea * prMitad) / 10000;
		
		cout << "El número de Cacaco Indio es de: " << numCacaoindio;
		
		sgMitad = (numHectareas - prMitad) / 2;
		supArbol = (1*1);
		arbolesHectarea = 10000 / supArbol;
		numCabezanegro = (arbolesHectarea * sgMitad) / 10000;
		numAjicillo = (arbolesHectarea * sgMitad) / 10000;
		
		cout << "\n El número de Cabeza de Negro es de: " << numCabezanegro << "\n El número de Ajicillos es de:  " << numAjicillo ;
		
	  }
	  
	  return 0;
		
	}

