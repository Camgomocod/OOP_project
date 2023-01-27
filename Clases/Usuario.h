#include <iostream>
#include "visualizador.h"
#include "visualizador.cpp"

using namespace std;

class Usuario{
  public:
	int opc1, opc2;
	Usuario();
	Usuario(int opc1, int opc2);
	
	void recomendador();
	
	void menu_usuario();
};

Usuario::Usuario(){
	opc1 = 0;
	opc2 = 0;
}

Usuario::Usuario(int opc1, int opc2){
	this -> opc1 = opc1;
	this -> opc2 = opc2;
}

void Usuario::menu_usuario(){
	int opc1, opc2;
	do{
		printf("\n\t\t|-------------------------------||");
		printf("\n\t\t|<<>>| 1. PC Gaming        |<<>>||");
		printf("\n\t\t|<<>>| 2. PC Multimedia    |<<>>||");
		printf("\n\t\t|-------------------------------||");
		printf("\n\t\t[**]--Ingrese la opcion:>> ");
		cin>>opc1;
	}while(opc1 != 1 && opc1 != 2);
	do{
		printf("\n\t\t|--------------------------|<<>>||");
		printf("\n\t\t|<<>>| 1. Gama Economica   |<<>>||");
		printf("\n\t\t|<<>>| 2. Gama Media       |<<>>||");
		printf("\n\t\t|<<>>| 3. Gama Alta        |<<>>||");
		printf("\n\t\t|--------------------------|<<>>||");
		printf("\n\t\t[**]-Ingrese la opcion:>> ");
		cin>>opc2;
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
				visualizador.imprimir_registros_generales("../archivos del programa/CategoriasPcs/gaming-economico.txt");
			}else if(opc1 == 2){
				visualizador.imprimir_registros_generales("../archivos del programa/CategoriasPcs/multimedia-economico.txt");
			}
			break;
		
		case 2:
			if (opc1 == 1){
				visualizador.imprimir_registros_generales("../archivos del programa/CategoriasPcs/gaming-equilibrado.txt");
			}else if(opc1 == 2){
				visualizador.imprimir_registros_generales("../archivos del programa/CategoriasPcs/multimedia-equilibrado.txt");
			}
			break;
		
		case 3:
			if (opc1 == 1){
				visualizador.imprimir_registros_generales("../archivos del programa/CategoriasPcs/gaming-loMejor.txt");
			}else if(opc1 == 2){
				visualizador.imprimir_registros_generales("../archivos del programa/CategoriasPcs/multimedia-loMejor.txt");
			}
			break;
	}
	system("PAUSE");
}