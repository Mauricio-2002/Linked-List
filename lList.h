// LINKED LIST ALGORITHM
#pragma once

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
LL_NODE* LL_FIND(LL_NODE* node, char* value){
	if(node == NULL)
		return NULL;
	if((*node).value == value)
		return &(*node);
	LL_FIND((*node).next, value);
}


// REMOVE A NODE WITH A VALUE
int LL_REMOVE(LL_NODE** node, char* value){
	// LAST VALUE, AND VALUE FINDER
	bool flag = false;
	LL_NODE* lastValue = NULL;
	LL_NODE* finder = &(**node);
	while(finder != NULL){
		if((*finder).value == value){
			flag = true;
			break;
		}
		lastValue = &(*finder);
		finder = &(*(*finder).next);
	}
	if(flag){
		if(lastValue != NULL)
			(*lastValue).next = &(*(*finder).next);
		else
			(*node) = &(*(*finder).next);
		free(&(*finder));
		finder = NULL;
		return 0;
	}
	return 1;
}
// REMOVE THE LAST ELEMENT
void LL_REMOVE_L(LL_NODE** node){
	
}
// REMOVE THE FIRST ELEMENT
void LL_REMOVE_F(LL_NODE** node){
	
}
