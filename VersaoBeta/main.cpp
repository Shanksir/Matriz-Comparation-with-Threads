#include "matriz.h"
#include <thread>
#include <vector>

#define NUM_THREADS 4 /*Numero de Threads*/

void Mult(Matriz &a, Matriz &b, Matriz &c, int LStart, int LEnd){ 
	c.Multiply(a, b, LStart, LEnd);
}

int main(void)
{	
	int MatrizSize = 0, LineStart = 0, LineEnd = 0, count = 0 , i = 0;
	Matriz a,b,c;
	std::vector < std::thread > tThread; /*Vetor do tipo Thread chamado tThread*/
	a.Fill(); 
	b.Fill(); 
	a.PrintMatriz();
	b.PrintMatriz();
	c.Tam(MatrizSize); /*Salva o tamanho da matriz*/
	i = (MatrizSize/NUM_THREADS); /*Quantidade de linhas que cada Thread vai executar*/
	LineEnd = i - 1;

	for(count = 0; count < NUM_THREADS; count++ ){
			tThread.push_back(std::thread(Mult, std::ref(a), std::ref(b), std::ref(c), LineStart, LineEnd));
			LineStart += i;
			LineEnd += i;
	}
	for(count = 0; count < NUM_THREADS; count++){
		tThread[count].join();
	}
	c.PrintMatriz();
	
	return 0 ;
}