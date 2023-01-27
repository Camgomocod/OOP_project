#include "Visualizador.h"
#include <iostream>
#include <fstream>
#include <string>

void Visualizador::imprimir_registros_generales(std::string etiqueta){
    std::fstream file;

    file.open(etiqueta, std::ios::in);
    if (!file.is_open())
    {
        std::cout << "|>>>| ERROR AL ABRIR EL ARCHIVO |<<<|" << std::endl;
        return;
    }
    if (file.is_open())
    {
        std::string line;
        while (getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
    }
    
}