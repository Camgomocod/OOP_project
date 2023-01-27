#ifndef FILTRO_H_
#define FILTRO_H_

#include <iostream>


class Filtro
{
private:
    std::string modalidad_factura;
public:
    Filtro(std::string);
    Filtro();
    void filtrar_modalidad(Node* head);
    void imprimir_ventas(Node* head);
};

#endif