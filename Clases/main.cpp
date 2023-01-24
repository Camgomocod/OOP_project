#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

int main(int argc, char const *argv[])
{
    std::string categoria, nombre, fecha, modalidad, numeroFactura;
    double precio;
    LinkedList list;
    
    for (size_t i = 0; i < 2; i++)
    {
        std::cout << "Ingrese los datos : " << std::endl;
        std::cin >> categoria;
        std::cin >> nombre;
        std::cin >> fecha;
        std::cin >> modalidad;
        std::cin >> precio;
        std::cin >> numeroFactura;
        list.insertNode(categoria, nombre, fecha, modalidad, precio, numeroFactura);
    }
    
    list.printList();
    
    return 0;
}
