#include <iostream>

class Factura
{
private:

    struct Factura_Nodos
    {
        std::string fecha_venta;
        std::string id_factura;
        std::string nombre_producto;
        double precio;
        std::string categoria_producto;
    };
    

public:
    Factura(/* args */);
    ~Factura();
};
