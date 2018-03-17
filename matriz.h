#ifndef _MATRIZ_H_
#define _MATRIZ_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define SIZE 12


class Matriz{
	private:
		int matriz[SIZE][SIZE];
	public:
	
		Matriz ();
		void fill(Matriz &a);	
		void ImprimeMatriz ();
		void MultiplicaMatriz(const Matriz &a, const Matriz &b);
		
};

#endif
