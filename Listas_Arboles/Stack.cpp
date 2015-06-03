#include "stdafx.h"
#include "Stack.h"
#include "Elemento.h"
#include "Lista.h"


Stack::Stack(Elemento* elemento)
{
	this->insertarFinal(elemento);
}


Stack::~Stack()
{
}
Elemento* Stack::peek(){
	return this->inicial;
}
void Stack::push(Elemento* elemento){
	this->insertarInicio(elemento);

}
Elemento* Stack::pop(){
	Elemento* temp= peek();
	this->removerInicio();
	return temp;
}
ostream & operator<<(ostream & out, Stack & s) {
	s.imprimir(out);

	return out;
}
