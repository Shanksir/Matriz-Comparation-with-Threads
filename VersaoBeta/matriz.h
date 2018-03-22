#ifndef _MATRIZ_H_
#define _MATRIZ_H_

#include <iostream> /*Biblioteca padrão de entrada e saída.*/
#include <cstdlib> /*Necessário para utilizar as funções Rand e Srand*/
#include <cstring> /*Necessário para utilizar a função MEMSET ao qual é utilizada para preencher a matriz inicialmente com zeros*/

#define SIZE 16 /*Linha e coluna*/

class Matriz{
	private:
		int matriz[SIZE][SIZE];
	public:
	
		Matriz (); /*Construtor*/
		void Fill(); /*Preenche a matriz com números aleatórios*/	
		void const PrintMatriz (); /*Função para imprimir uma matriz*/
		void Multiply(const Matriz &a, const Matriz &b, int LStart, int LEnd); /*Função para multiplicar matrizes quadráticas.*/
		int Tam(int &a); /*Retorna o tamanho de uma matriz*/
};

#endif