#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <iostream>
#include "Node.h"

class LinkedList
{
private:
    Node* head;
public:
    LinkedList() {head = NULL;}
    
    void insertarNode(std::string, std::string, std::string, std::string, double, std::string);
    
    bool validar_categoria(int digitar_categoria);

    std::string concatenar_fecha( std::string, std::string, std::string);

    bool validar_modalidad(std::string);

    void modificar_valor_venta(void);

    void registrar_informacion_venta();

    Node* getHead(){
        return this->head;
    }
};

#endif

