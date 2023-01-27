#include "Filtro.h"

Filtro::Filtro(std::string modalidad_venta){
    this->modalidad_factura = modalidad_venta;
}

Filtro::Filtro(){
    this->modalidad_factura = "";
}

void Filtro::filtrar_modalidad(Node* head){
    Node* temp = head;
    std::string modalidad;

    if (temp == NULL)
    {
        std::cout << "|> No hay ventas registradas <|" << std::endl;
        return;
    }
    

    std::cout << "|>>>| Ingrese el numero de la factura de la venta: |<<<|" << std::endl;
    std::cin >> modalidad;

    while (temp != NULL)
    {       
        if (temp->numero_factura == modalidad)
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