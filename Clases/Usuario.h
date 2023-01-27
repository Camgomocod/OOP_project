#include <iostream>
#include "visualizador.h"
#include "visualizador.cpp"

using namespace std;

class Usuario{
  public:
	int preferencia, presupuesto;
	Usuario();
	Usuario(int opc1, int opc2);
	
	void recomendador();
	
	void menu_usuario();
};

Usuario::Usuario(){
	preferencia = 0;
	presupuesto = 0;
}

Usuario::Usuario(int opc1, int opc2){
	this -> preferencia = opc1;
	this -> presupuesto = opc2;
}

void Usuario::menu_usuario(){
	int preferencia, presupuesto;
	do{
		printf("\n\t\t|-------------------------------||");
		printf("\n\t\t|<<>>| 1. PC Gaming        |<<>>||");
		printf("\n\t\t|<<>>| 2. PC Multimedia    |<<>>||");
		printf("\n\t\t|-------------------------------||");
		printf("\n\t\t[**]--Ingrese la opcion:>> ");
		cin>>preferencia;
	}while(preferencia != 1 && preferencia != 2);
	do{
		printf("\n\t\t|--------------------------|<<>>||");
		printf("\n\t\t|<<>>| 1. Gama Economica   |<<>>||");
		printf("\n\t\t|<<>>| 2. Gama Media       |<<>>||");
		printf("\n\t\t|<<>>| 3. Gama Alta        |<<>>||");
		printf("\n\t\t|--------------------------|<<>>||");
		printf("\n\t\t[**]-Ingrese la opcion:>> ");
		cin>>presupuesto;
	}while(presupuesto < 1 || presupuesto > 3);
	//system("cls");
	//Usuario cliente;
	Usuario cliente(preferencia, presupuesto);
	cliente.recomendador();
}

void Usuario::recomendador(){
	Visualizador visualizador;
	switch(presupuesto){
		case 1:
			if (preferencia == 1){
				visualizador.imprimir_registros_generales("../Archivos/gaming-economico.txt");
			}else if(preferencia == 2){
				visualizador.imprimir_registros_generales("../Archivos/multimedia-economico.txt");
			}
			break;
		
		case 2:
			if (preferencia == 1){
				visualizador.imprimir_registros_generales("../Archivos/gaming-equilibrado.txt");
			}else if(preferencia == 2){
				visualizador.imprimir_registros_generales("../Archivos/multimedia-equilibrado.txt");
			}
			break;
		
		case 3:
			if (preferencia == 1){
				visualizador.imprimir_registros_generales("../Archivos/gaming-loMejor.txt");
			}else if(preferencia == 2){
				visualizador.imprimir_registros_generales("../Archivos/multimedia-loMejor.txt");
			}
			break;
	}
	system("PAUSE");
}