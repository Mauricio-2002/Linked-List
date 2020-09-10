// LINKED LIST ALGORITHM
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

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
void ll_add_top(LL_NODE** node, char* value){
	LL_NODE* n_node = malloc(sizeof(LL_NODE));
	(*n_node).value = value;
	(*n_node).next = &(**node);
	*node = &(*n_node);
}

void ll_add_bottom(LL_NODE** node, char* value){
	if(*node == NULL){
		ll_add_top(&(*node), value);
		return;
	}
	LL_NODE* end = *node;
	LL_NODE* n_node = malloc(sizeof(LL_NODE));
	while((*end).next != NULL){
		end = &(*(*end).next);
	};
	(*n_node).value = value;
	(*n_node).next = NULL;
	(*end).next = &(*n_node);
}

// FIND VALUE
LL_NODE* ll_find(LL_NODE* node, char* value){
	if(node == NULL)
		return NULL;
	if((*node).value == value)
		return &(*node);
	ll_find((*node).next, value);
}


// REMOVE A NODE WITH A VALUE
int ll_remove(LL_NODE** node, char* value){
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
void ll_remove_top(LL_NODE** node){
	if(*node == NULL)
		return;
	LL_NODE* last = &(**node);
	*node = (*last).next;
	free(&(*last));
	last = NULL;
}
// REMOVE THE FIRST ELEMENT
void ll_remove_bottom(LL_NODE** node){
	if(*node == NULL)
		return;
	LL_NODE* end = &(**node);
	LL_NODE* before = NULL;
	while((*end).next != NULL){
		before = &(*end);
		end = &(*(*end).next);
	}
	if(before == NULL){
		*node = NULL;
		free(&(*end));
		return;
	}
	(*before).next = NULL;
	free(&(*end));
}
