#include "LinkedList.h"

#include "LinkedList.h"

void LinkedList::deleteNode(int nodeOffSett) {
    Node* temp1 = head, *temp2 = NULL;
    int ListLen {0};

    if(head == NULL) {
        std::cout << "List Empty" << std::endl;
        return;
    }

    while(temp1 != NULL){
        temp1 = temp1->next;
        ListLen++;
    }

    if(ListLen < nodeOffSett) {
        std::cout << "Index out of the range " << std::endl;
        return;
    }

    temp1 = head;

    if(nodeOffSett == 1) {
        head = head->next;
        delete temp1;
        return;
    }

    while (nodeOffSett-- > 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = temp1->next;
    
}

void LinkedList::insertNode(std::string categoriaProducto, std::string nombreProducto, std::string fechaVenta, std::string modVenta,
        double precioVenta, std::string numeroFactura) {
    Node* newNode = new Node(categoriaProducto, nombreProducto, fechaVenta, modVenta, precioVenta, numeroFactura);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList::printList() {
    Node* temp = head;

    if(head == NULL) {
        std::cout << "List Empty" << std::endl;
        return;
    }

    while (temp != NULL)
    {
        std::cout << temp->categoria_producto << std::endl;
        std::cout << temp->nombre_producto << std::endl;
        std::cout << temp->fecha_venta << std::endl;
        std::cout << temp->modalidad_venta << std::endl;
        
        temp = temp->next;
    }
    
}