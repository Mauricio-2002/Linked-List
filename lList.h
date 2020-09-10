// LINKED LIST ALGORITHM
#pragma once

#include<stdlib.h>
// SIMPLE NODES FOR SIMPLE LISTS
typedef struct NODE{
	char* value;
	struct NODE* next;
} LL_NODE;
// CIRCULAR NODES FOR CIRCULAR LISTS
typedef struct C_NODE{
	char* value;
	struct C_NODE* next;
	struct C_NODE* before;
} LLC_NODE;


// ADD VALUE TO THE LIST
void LL_ADD(LL_NODE** node, char* value){
	LL_NODE* n_node = malloc(sizeof(LL_NODE));
	(*n_node).value = value;
	(*n_node).next = &(**node);
	*node = &(*n_node);
}

// FIND VALUE
int LL_FIND(LL_NODE* node, char* value){
	if(node == NULL)
		return -1;
	if((*node).value == value)
		return 0;
	LL_FIND((*node).next, value);
}





// REMOVE A NODE WITH A VALUE
void LL_REMOVE(LL_NODE** node, char* value){
	
}
// REMOVE THE LAST ELEMENT
void LL_REMOVE_L(LL_NODE** node){
	
}
// REMOVE THE FIRST ELEMENT
void LL_REMOVE_F(LL_NODE** node){
	
}
