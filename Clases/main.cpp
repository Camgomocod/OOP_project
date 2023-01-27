#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Filtro.h"
#include "Filtro.cpp"
#include "Registro.h"
#include "Registro.cpp"
#include "Visualizador.h"
#include "Visualizador.cpp"


int main(int argc, char const *argv[])
{
    LinkedList list;
    Filtro filtro;
    Registro registro;
    Visualizador visualizador;

    list.registrar_informacion_venta();
    Node* head = list.getHead();
    filtro.imprimir_ventas(head);
    registro.almacenar_ventas(head);
    visualizador.imprimir_registros_generales("../Archivos/Total_Ventas_Registro.txt");

    return 0;
}