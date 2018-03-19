#include "matriz.h"

Matriz::Matriz(){
	memset(matriz, 0, sizeof(matriz));
	srand(time(NULL));
}

void Matriz::Fill (Matriz &a){
	int i = 0, j = 0;
	for(i = 0; i <= SIZE - 1; i++)
		for(j = 0; j <= SIZE -1; j++)
			a.matriz[i][j] = (rand() % 10) + 1;			
}

void Matriz::PrintMatriz(){

	int i, j;
	for(i = 0; i <= SIZE - 1; i++){
		std::cout << std::endl;
		for(j = 0; j<= SIZE -1; j++)
			std::cout << matriz[i][j] << "|";
	}
	std::cout << std::endl;
}

void Matriz::MultiplicaMatriz(const Matriz &a,const Matriz &b){
	int i,j,k;
    
    for (i=0;i <= SIZE - 1; i++)
      for (j=0; j <= SIZE -1; j++)
        for (k=0; k <= SIZE -1; k++) {
          matriz[i][j] = matriz[i][j] + (b.matriz[i][k] * a.matriz[k][j]); 
		}
	
}


