#include "Tienda.h"
#include "LinkedList.h"
#include <iostream>



void Tienda::menu_principal(){
    std::cout << ("\n\t\t|--------------------------------------------------------------------|");
    std::cout << ("\n\t\t|      |[***********]|>          MENU          <|[***********]|      |");
    std::cout << ("\n\t\t|(>>>>)| Opcion 1: Ingresar informacion de la venta.          |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 2: Filtrar facturas por modalidad.            |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 3: Modificar valor de venta.                  |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 4: Recomedador de Pcs.                        |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 5: Imprimir las ventas ingresadas.            |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 6: Imprimir todos los registros de venta.     |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 7: Imprimir registros modalidad Online.       |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 8: Imprimir registros modalidad Presencial.   |(<<<<)|");
    std::cout << ("\n\t\t|(>>>>)| Opcion 9: >| Salir. |<                               |(<<<<)|");
    std::cout << ("\n\t\t|--------------------------------------------------------------------|");
    std::cout << ("\n");
    std::cout << ("\n\t\t|[*]>>>[*]| Digite la opcion que desea seleccionar.        |[*][*]>");
}

/**
 * @brief
 * Asignamos la informacion correspondiente a las variables para luego enviarselos a la funcion que
 * conecta a los nodos y en lamisma se las envia al constructir
*/
