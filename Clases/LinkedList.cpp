#include "LinkedList.h"
#include <iostream>


/**
 * @brief
 * pasamos los datos al constructor del nodo y enla calse linked list los enlazamos
 * mediante sus direcciones en memoria ubicandolos al final.
*/
void LinkedList::insertarNode(std::string categoriaProducto, std::string nombreProducto, std::string fechaVenta, std::string modVenta,
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

/**
 * @brief
 * validamos que la categoria este en el rango aceptado
*/
bool LinkedList::validar_categoria(int digitar_categoria){
    if (digitar_categoria >=1 && digitar_categoria){}
    {
        return 1;
    }
    
    return 0;
}

/**
 * @brief
 * concatenamos la cadena en una sola para luego pasarselo a la funcion que une los nodos
*/
std::string LinkedList::concatenar_fecha( std::string anio, std::string mes, std::string dia){
    std::string fecha = anio + "/" + mes + "/" + dia;
    
    return fecha;
}

/**
 * @brief
 * validamso que la variabple que recive la funcion sea igual a : 
 * Presencial : P
 * Online : O 
*/
bool LinkedList::validar_modalidad(std::string modalidad){
    std::string online {"O"};
    std::string precensial {"P"};

    if (modalidad == online)
    {
        return 1;
    }else if (modalidad == precensial)
    {
        return 1;
    }

    return 0;
    
}

/**
 * @brief
 * Buscamos el nodod que coincide con el numero de factura una vez encontrado modificamos su valro
*/
void LinkedList::modificar_valor_venta(){
    Node* temp = head;
    std::string factura {""};
    
    std::cout << std::endl;
    std::cout << "|>>>| Ingrese el numero de la factura de la venta: |<<<|" << std::endl;
    std::cin >> factura;

    while (temp != NULL)
    {
        if (temp->numero_factura == factura)
        {
            std::cout << "|>>>| Ingrese el nuevo valor del producto :" << temp->nombre_producto  << " |<<<|"<< std::endl;
            std::cin >> temp->precio_venta;

        }
        
        temp = temp->next;
    }
    
}

/**
 * @brief
 * Asignamos la informacion correspondiente a las variables para luego enviarselos a la funcion que
 * conecta a los nodos y en lamisma se las envia al constructir
*/

void LinkedList::registrar_informacion_venta(){
    std::string categoria_producto, nombre_producto, modalidad_venta, num_factura;
    std::string dia, mes, anio, fecha_venta;
    int num_nodos {}, digitar_categoria{};
    double precio_venta;
    
    std::cout << ("|[**]> Digite cuantas ventas desea ingresar :   <|[**]") << std::endl;
    std::cin >> num_nodos;

    for (int i = 0; i < num_nodos; i++)
    {
        std::cout << "|[**]> Venta numero : " << i+1 << " <|[**]" << std::endl;
        do
        {
            std::cout << "|[>>>]| Digite la categoria del producto  [[**]]>" << std::endl;
            std::cout << "|[>>>]| Categoria 1: Placa Base" << std::endl;
            std::cout << "|[>>>]| Categoria 2: Ram" << std::endl;
            std::cout << "|[>>>]| Categoria 3: Fuente De Poder" << std::endl;
            std::cout << "|[>>>]| Categoria 4: Procesador" << std::endl;
            std::cout << "|[>>>]| Categoria 5: Ssd" << std::endl;
            std::cout << "|[>>>]| Categoria 6: Tarjeta grafica" << std::endl;
            std::cout << "|[>>>]| Categoria 7: Disco Duro \n[[**]]>";
            std::cin >> digitar_categoria;
        } while (!validar_categoria(digitar_categoria));

        switch (digitar_categoria)
        {
        case 1:
            categoria_producto = "Placa Base";
            break;
        case 2:
            categoria_producto = "Ram";
            break;
        case 3:
            categoria_producto = "Fuente de Poder";
            break;
        case 4:
            categoria_producto = "Procesador";
            break;
        case 5:
            categoria_producto = "Ssd";
            break;
        case 6:
            categoria_producto = "Tarjeta Grafica";
            break;
        case 7:
            categoria_producto = "Disco Duro";
            break;
        default:
            std::cout << "! Categoria Incorrecta ¿" << std::endl;
            break;
        }
        
        
        std::cout << "|[>>>]|Ingrese el nombre del producto\n[[**]]>";
        getline(std::cin ,nombre_producto);
        std::cin.ignore(10000,'\n');
        std::cout << std::endl;
        std::cout << "|[>>>]|Ingrese la fecha de venta : " << std::endl;
        std::cout << "|[>>>]|Año\t|[**]|>";
        std::cin >> anio;
        std::cout << "|[>>>]|Mes\t|[**]|>";
        std::cin >> mes;
        std::cout << "|[>>>]|Dia\t|[**]|>";
        std::cin >> dia;
        fecha_venta = concatenar_fecha(anio,mes,dia);
        
        std::cout << std::endl;
        do
        {
            std::cout << "|[>>>]| Ingrese la modalidad de venta\t |[**]|>";
            std::cin >> modalidad_venta;
        } while (!validar_modalidad(modalidad_venta));

        std::cout << std::endl;
        do{
            std::cout << "|[>>>]| Ingrese el precio de venta\t[[**]]>";
            std::cin >> precio_venta;
        }while(precio_venta < 0);

        std::cout << std::endl;
        std::cout << "|[>>>]| Ingrese el numero de factura\t[[**]]>";
        std::cin >> num_factura;

        insertarNode(categoria_producto, nombre_producto, fecha_venta, modalidad_venta, precio_venta, num_factura);

        system("cls");
    }
}





