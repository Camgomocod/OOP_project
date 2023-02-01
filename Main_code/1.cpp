#include <iostream>
#include "../Clases/LinkedList.h"
#include "../Clases/LinkedList.cpp"
#include "../Clases/Filtro.h"
#include "../Clases/Filtro.cpp"
#include "../Clases/Registro.h"
#include "../Clases/Registro.cpp"
#include "../Clases/Tienda.h"
#include "../Clases/Tienda.cpp"
#include "../Clases/Visualizador.h"
#include "../Clases/Visualizador.cpp"
#include "../Clases/Usuario.h"
#include "../Clases/Usuario.cpp"

int main(int argc, char const *argv[])
{
    LinkedList list;
    Filtro filtro;
    Registro registro;
    Visualizador visualizador;
    Tienda tienda;
    Usuario usuario;

    Node* head = NULL;
    int opc {0};

    do
    {
        system("pause");
        system("cls");
        tienda.menu_principal();
        std::cin >> opc;
        system("cls");

        switch (opc)
        {
        case 1:{
            system("cls");
            list.registrar_informacion_venta();
            head = list.getHead();
        }break;
        case 2:{
            system("cls");
            filtro.filtrar_modalidad(head);
        }break;
        case 3:{
            system("cls");
            list.modificar_valor_venta();
        }break;
        case 4:{
            system("cls");
            usuario.menu_usuario();
        }break;
        case 5:{
            system("cls");
            filtro.imprimir_ventas(head);
        }break;
        case 6:{
            system("cls");
            visualizador.imprimir_registros_generales("../Archivos/Total_Ventas_Registro.txt");
        }break;
        case 7:{
            system("cls");
            visualizador.imprimir_registros_generales("../Archivos/Online_Register.txt");
        }break;
        case 8:{
            system("cls");
            visualizador.imprimir_registros_generales("../Archivos/Presencial_Register.txt");
        }break;
        case 9:{
            system("cls");
            std::cout << "\t\n[|*|*|*|]          GRACIAS POR ELEGIRNOS         [|*|*|*|]\n";
        }break;
        default:{
            system("cls");
            std::cout << "\n\t[|*|*|*|]      OPCION INVALIDA!     [|*|*|*|]";
        }break;
        }

    } while (opc != 9);
    
    registro.almacenar_ventas(head);
    registro.almacenar_modalidad(head, "O", "../Archivos/Online_Register.txt");
    registro.almacenar_modalidad(head, "P", "../Archivos/Presencial_Register.txt");
    

    return 0;
}
