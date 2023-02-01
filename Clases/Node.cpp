#include "Node.h"
#include <iostream>

Node::Node(std::string categoriaProducto, std::string nombreProducto, std::string fechaVenta, std::string modVenta,
    double precioVenta, std::string numeroFactura) {
    this->categoria_producto = categoriaProducto; 
    this->nombre_producto = nombreProducto;
    this->fecha_venta = fechaVenta;
    this->modalidad_venta = modVenta;
    this->precio_venta = precioVenta;
    this->numero_factura = numeroFactura;
    this->next = NULL;
}