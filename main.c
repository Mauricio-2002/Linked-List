// LINKED LIST TESTING
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"lList.h"

int main(){
	LL_NODE* lista = NULL;
	ll_add_bottom(&lista, "B");
	ll_add_bottom(&lista, "A");
	ll_add_bottom(&lista, "C");
	ll_add_top(&lista, "C");
	return 0;
}