// Listas_Arboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "Persona.h"
#include "Lista.h"
#include "Stack.h"


int _tmain(int argc, _TCHAR* argv[])
{



	cout << "Crear un stack  con un 2" << endl;
	Stack s(new ElementoInt(2));
	cout << "stack s:" << s << endl;
	cout << "Hacemos push de un 3" << endl;
	s.push(new ElementoInt(3));
	cout << "stack s:" << s << endl;
	cout << "Hacemos push de un 4" << endl;
	s.push(new ElementoInt(4));
	cout << "stack s:" << s << endl;
	cout << "Hacemos push de un 5" << endl;
	s.push(new ElementoInt(5));
	cout << "stack s:" << s << endl;
	
	Elemento* peek = s.peek();
	cout << "Peek es :" << *peek << endl;
	Elemento* pop = s.pop();
	cout << "Pop es :" << *pop << endl;
	delete pop;
	cout << "Despues del Pop:" << endl;
	cout << "stack s:" << s << endl;





	system("pause");
	return 0;

}

