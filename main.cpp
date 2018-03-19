#include "matriz.h"
#define NUM_THREADS 2

int main(void)
{	
	Matriz a,b;
	int i;
	std::vector<std::thread> mThreads;
	c.Fill(b);
	c.Fill(a);
	b.PrintMatriz();
	a.PrintMatriz();
	for(i = 0; i <  NUM_THREADS; i++) {
		mThreads.push_back(std::thread(thread_function,i));
	}
	for (i = 0; i < NUM_THREADS; i++){
		mThreads[i].join();
	}
	c.MultiplicaMatriz(a,b);
	c.PrintMatriz();
	
	return 0;
}