// LINKED LIST TESTING
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"lList.h"

int main(){
	LL_NODE* lista = NULL;
	ll_remove_li(&lista);
	ll_add(&lista, "B");
	ll_add(&lista, "C");
	ll_add(&lista, "D");
	// ll_remove(&lista, "C");
	ll_remove_fi(&lista);
	return 0;
}