// LINKED LIST TESTING
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lList.h"

int main(){
	LL_NODE* lista = NULL;
	LL_ADD(&lista, "Hola");
	// LL_ADD(&lista, "Adios");
	printf("%i\n", LL_FIND(lista, "Hola"));
	return 0;
}