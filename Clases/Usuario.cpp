#include <iostream>
#include "Usuario.h"

Usuario::Usuario(){
	opc1 = 0;
	opc2 = 0;
}

Usuario::Usuario(int opc1, int opc2){
	this -> opc1 = opc1;
	this -> opc2 = opc2;
}

/**
 * @brief
 * Menus disponibles para el cliente donde tenomos 
 * dos categorias con el mismo menu, una ves seleccionado una opcion 
 * se le mostrara las recomendaciones
*/
void Usuario::menu_usuario(){
	int opc1, opc2;
	do{
		std::cout <<("\n\t\t|-------------------------------||");
		std::cout <<("\n\t\t|<<>>| 1. PC Gaming        |<<>>||");
		std::cout <<("\n\t\t|<<>>| 2. PC Multimedia    |<<>>||");
		std::cout <<("\n\t\t|-------------------------------||");
		std::cout <<("\n\t\t[**]--Ingrese la opcion:>> ");
		std::cin >> opc1;
	}while(opc1 != 1 && opc1 != 2);
	do{
		std::cout << ("\n\t\t|--------------------------|<<>>||");
		std::cout << ("\n\t\t|<<>>| 1. Gama Economica   |<<>>||");
		std::cout << ("\n\t\t|<<>>| 2. Gama Media       |<<>>||");
		std::cout << ("\n\t\t|<<>>| 3. Gama Alta        |<<>>||");
		std::cout << ("\n\t\t|--------------------------|<<>>||");
		std::cout << ("\n\t\t[**]-Ingrese la opcion:>> ");
		std::cin >> opc2;
	}while(opc2 < 1 || opc2 > 3);
	//system("cls");
	//Usuario cliente;
	Usuario cliente(opc1, opc2);
	cliente.recomendador();
}

void Usuario::recomendador(){
	Visualizador visualizador;
	switch(opc2){
		case 1:
			if (opc1 == 1){
				visualizador.imprimir_registros_generales("../Archivos/gaming-economico.txt");
			}else if(opc1 == 2){
				visualizador.imprimir_registros_generales("../Archivos/multimedia-economico.txt");
			}
			break;
		
		case 2:
			if (opc1 == 1){
				visualizador.imprimir_registros_generales("../Archivos/gaming-equilibrado.txt");
			}else if(opc1 == 2){
				visualizador.imprimir_registros_generales("../Archivos/multimedia-equilibrado.txt");
			}
			break;
		
		case 3:
			if (opc1 == 1){
				visualizador.imprimir_registros_generales("../Archivos/gaming-loMejor.txt");
			}else if(opc1 == 2){
				visualizador.imprimir_registros_generales("../Archivos/multimedia-loMejor.txt");
			}
			break;
	}
	system("PAUSE");
}