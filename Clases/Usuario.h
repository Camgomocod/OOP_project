#ifndef USUARIO_H_
#define USUARIO_H_
#include <iostream>

class Usuario{
  public:
	int opc1, opc2;
	Usuario();
	Usuario(int opc1, int opc2);
	
	void recomendador();
	
	void menu_usuario();
};

#endif