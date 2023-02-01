#ifndef NODE_H_
#define NODE_H_
#include <iostream>

class Node
{
public:
    std::string categoria_producto;
    std::string nombre_producto;
    std::string fecha_venta;
    std::string modalidad_venta;
    double precio_venta;
    std::string numero_factura;
    
    Node* next;
    
    Node(std::string categoriaProducto, std::string nombreProducto, std::string fechaVenta, std::string modVenta,
        double precioVenta, std::string numeroFactura);
    
};


#endif