#include "matriz.h"

int main(void)
{	
	Matriz a,b,c;
	c.fill(b);
	c.fill(a);
	b.ImprimeMatriz();
	a.ImprimeMatriz();
	c.MultiplicaMatriz(a,b);
	c.ImprimeMatriz();
	
	return 0;
}