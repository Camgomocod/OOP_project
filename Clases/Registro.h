#ifndef REGISTRO_H_
#define REGISTRO_H_
#include "LinkedList.h"
#include <iostream>


class Registro 
{
    
public:
    void almacenar_ventas(Node*);
    
    void almacenar_modalidad(Node*, std::string, std::string);
    
    double total_ventas_registradas(Node* );
};

#endif
