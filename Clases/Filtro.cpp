#include "Filtro.h"

/**
 * @brief
 * Ingresamos la modalidad que deseamos filtrar 
 * 1. Presenvial
 * 2. Online
 * si la categoria coincide con la ingresada estas se mostraran, si coincide
 * con la hiteracion de los nodos
*/
void Filtro::filtrar_modalidad(Node* head){
    Node* temp = head;
    std::string modalidad;

    if (temp == NULL)
    {
        std::cout << "|> No hay ventas registradas <|" << std::endl;
        return;
    }
    

    std::cout << "|>>>| Ingrese la modalidad de venta para ver los registros: |<<<|" << std::endl;
    std::cin >> modalidad;

    while (temp != NULL)
    {       
        if (temp->modalidad_venta == modalidad)
        {
            std::cout << ">----------------------------------------<" << std::endl;
            std::cout << std::endl;
            std::cout << "|>>>| Categoria Del Producto: >" << temp->categoria_producto << " |<<<|" << std::endl;
            std::cout << std::endl;
            std::cout << "|>>>| Nombre del producto:   >" << temp->nombre_producto << " |<<<|" << std::endl;
            std::cout << "|>>>| fecha de venta:        >" << temp->fecha_venta << " |<<<|" << std::endl;
            std::cout << "|>>>| Modalidad de venta:    >" << temp->modalidad_venta << " |<<<|" << std::endl;
            std::cout << "|>>>| Precio de la venta:    >" << temp->precio_venta << " |<<<|" << std::endl;
            std::cout << "|>>>| Numero de factura:     >" << temp->numero_factura << " |<<<|" << std::endl;
            std::cout << std::endl;
            std::cout << ">----------------------------------------<" << std::endl;
            std::cout << std::endl;

        }

        temp = temp->next;
    }
    
}

/**
 * @brief 
 * Imprimimos todas las ventas ingresadas hiterando los nodos hasta llegar al ultimo cuyo link
 * es NULL ahi se detiene la impresion.
*/
void Filtro::imprimir_ventas(Node* head){
    Node* temp = head;
    
    if (temp == NULL)
    {
        std::cout << "|> No hay ventas registradas <|" << std::endl;
        return;
    }

    while (temp != NULL)
    {       
        
        std::cout << ">----------------------------------------<" << std::endl;
        std::cout << std::endl;
        std::cout << "|>>>| Categoria Del Producto: >" << temp->categoria_producto << " |<<<|" << std::endl;
        std::cout << std::endl;
        std::cout << "|>>>| Nombre del producto:   >" << temp->nombre_producto << " |<<<|" << std::endl;
        std::cout << "|>>>| fecha de venta:        >" << temp->fecha_venta << " |<<<|" << std::endl;
        std::cout << "|>>>| Modalidad de venta:    >" << temp->modalidad_venta << " |<<<|" << std::endl;
        std::cout << "|>>>| Precio de la venta:    >" << temp->precio_venta << " |<<<|" << std::endl;
        std::cout << "|>>>| Numero de factura:     >" << temp->numero_factura << " |<<<|" << std::endl;
        std::cout << std::endl;
        std::cout << ">----------------------------------------<" << std::endl;
        std::cout << std::endl;

        temp = temp->next;
    }
}