#pragma once
#include "Lista.h"
#include "Elemento.h"
#include "Lista.h"

class Stack :
	protected Lista
{
friend ostream & operator<<(ostream &, Stack &);

public:
	Stack(Elemento* elemento);
	virtual ~Stack();
	Elemento* peek();
	void push(Elemento*);
	Elemento* pop();
};

ostream & operator<<(ostream &, Stack &);