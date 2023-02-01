
#include "Registro.h"
#include <fstream>
#include <iostream>

/**
 * @brief
 * Calculamos el valor total de todas las ventas sumando la hiteracion de precio venta
 * en la variable
*/
double Registro::total_ventas_registradas(Node* head){
    Node* temp = head;
    double suma_ventas {0};

    while (temp != NULL)
    {
        suma_ventas += temp->precio_venta;

        temp = temp->next;
    }
    
    return suma_ventas;

}


/**
 * @brief 
 * Almacenamos las ventas registradas en txt para cuando el usuario salga del programa
 * y se guarden automaticamente, escribimos enlos txts todo lo registrado por el usuario.
*/
void Registro::almacenar_ventas(Node* head){
    Node* temp = head;
    std::fstream file;

    file.open("../Archivos/Total_Ventas_Registro.txt", std::ios::app);
    if(!file.is_open()) std::cout << "|>>>| ERROR AL ABRIR EL ARCHIVO |<<<|" << std::endl;

    double suma_ventas {total_ventas_registradas(head)};
    if (!(temp->categoria_producto == ""))
    {
        file << "|[****]| REGISTRO TOTAL DE VENTAS: |[]> " << suma_ventas << " <[]| |[****]|"<< std::endl;
    }
    
    while(temp != NULL){
        if (file.is_open()){
            file << ">----------------------------------------<" << std::endl;
            file << std::endl;
            file << "|>>>| Categoria Del Producto: >" << temp->categoria_producto << " |<<<|" << std::endl;
            file << std::endl;
            file << "|>>>| Nombre del producto:   >" << temp->nombre_producto << " |<<<|" << std::endl;
            file << "|>>>| fecha de venta:        >" << temp->fecha_venta << " |<<<|" << std::endl;
            file << "|>>>| Modalidad de venta:    >" << temp->modalidad_venta << " |<<<|" << std::endl;
            file << "|>>>| Precio de la venta:    >" << temp->precio_venta << " |<<<|" << std::endl;
            file << "|>>>| Numero de factura:     >" << temp->numero_factura << " |<<<|" << std::endl;
            file << std::endl;
            file << ">----------------------------------------<" << std::endl;
            file << std::endl;
        }
        
        temp = temp->next;
    }

    file.close();
}

/**
 * @brief
 * Segun la modalidad que se se la apse guardara los registros, la etiqueta corresponde
 * al path de direccion edel archivo txt
*/
void Registro::almacenar_modalidad(Node* head, std::string modalidad, std::string etiqueta){
    Node* temp = head;
    std::fstream file;

    file.open(etiqueta, std::ios::app);
    if(!file.is_open()) std::cout << "|>>>| ERROR AL ABRIR EL ARCHIVO |<<<|" << std::endl;

    if (temp->categoria_producto == modalidad)
    {
        file << "|[****]| NUEVO REGISTRO: |[]>" << std::endl;
    }
    
    while(temp != NULL){
        if (file.is_open()){
            if(temp->modalidad_venta == "O"){
                file << ">----------------------------------------<" << std::endl;
                file << std::endl;
                file << "|>>>| Categoria Del Producto: >" << temp->categoria_producto << " |<<<|" << std::endl;
                file << std::endl;
                file << "|>>>| Nombre del producto:   >" << temp->nombre_producto << " |<<<|" << std::endl;
                file << "|>>>| fecha de venta:        >" << temp->fecha_venta << " |<<<|" << std::endl;
                file << "|>>>| Modalidad de venta:    >" << temp->modalidad_venta << " |<<<|" << std::endl;
                file << "|>>>| Precio de la venta:    >" << temp->precio_venta << " |<<<|" << std::endl;
                file << "|>>>| Numero de factura:     >" << temp->numero_factura << " |<<<|" << std::endl;
                file << std::endl;
                file << ">----------------------------------------<" << std::endl;
                file << std::endl;
            }
        }   
        
        temp = temp->next;
    }

    file.close();
}
