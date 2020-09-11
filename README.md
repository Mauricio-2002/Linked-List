 # **Linked list for C**

Header file for C linked lists.

About linked lists: [Wikipedia: Linked Lists](https://en.wikipedia.org/wiki/Linked_list)

## *Index*
* **How to use**
	* [Create a linked list](#create-a-linked-list)
		* [Simple linked list](#simple-linked-list)
	* [**Simple list**](#simple-list)
		* [Add a node to the list](#add-a-node-to-the-list)
			* [Add to top](#add-to-top)
			* [Add to bottom](#add-to-bottom)
		* [Remove a node](#remove-a-node)
			* [Remove a element](#remove-a-element)
			* [Remove top element](#remove-top-element)
			* [Remove bottom element](#remove-bottom-element)
		* [Find a node](#find-a-node)
* **Future**
	* [To do](#to-do)


# **How to use**
## Create a linked list
Before creating a list you need to include lList.h on your file
``` c
#include"lList.h"
```
### **Simple linked list**
To create a linked list, you need to make a pointer to LL_NODE and set it to **`NULL`**.

```c
LL_NODE* list = NULL; // THIS IS A LINKED LIST
```

# ***Simple list***
## Add a node to the list 
If the list has no value, use one of the following functions

### **Add to top**
___
To add a node to the top of the list use **`ll_add_top()`** function.
``` c
ll_add_top(&list, "Something")
```
This functions takes 2 arguments: A memory direction to the list, and a string.

The value given is pushed in the top of the list

#### Before adding a node
`list -> ["A"] -> ["B"] -> NULL`
#### After adding a node
`list -> ["C"] -> ["A"] -> ["B"] -> NULL`

### **Add to bottom**
___
To add a node to the bottom of the list use **`ll_add_bottom()`** function.
``` c
ll_add_bottom(&list, "Something")
```
This functions takes 2 arguments: A memory direction to the list, and a string.

The value given is pushed in the bottom of the list

#### Before adding a node
`list -> ["A"] -> ["B"] -> NULL`
#### After adding a node
`list -> ["A"] -> ["B"] -> ["C"] -> NULL`

## Remove a node
Use one of the following functions to remove a node
### **Remove a element**
___
To seek a node remove it use **`ll_remove()`** function.

``` c
ll_remove(&list, "Something");
```

This functions takes 2 arguments: A memory direction to the list, and a string to seek in the list.

#### Before remove a node
`list -> ["A"] -> ["B"] -> ["C"] -> NULL`
#### After removing a node
`list -> ["A"] -> ["C"] -> NULL`

*Note: this function can delete the first and last element*

### **Remove top element**
___
To remove the top node use **`ll_remove_top()`** function.

``` c
ll_remove_top(&list);
```

This functions takes the memory direction to the list and removes the top element.

#### Before remove a node
`list -> ["A"] -> ["B"] -> ["C"] -> NULL`
#### After removing a node
`list -> ["B"] -> ["C"] -> NULL`

### **Remove bottom element**
___
To remove the bottom node use **`ll_remove_bottom()`** function.

``` c
ll_remove_bottom(&list);
```

This functions takes the memory direction to the list and removes the bottom element.

#### Before remove a node
`list -> ["A"] -> ["B"] -> ["C"] -> NULL`
#### After removing a node
`list -> ["A"] -> ["B"] -> NULL`

## **Find a node**
To find a node in the list use **`ll_find()`** function.

``` c 
ll_find(&list, "Something");
```

This function takes 2 arguments: A memory direction of the list, and a value to find. And returns a pointer to the node if the value was found, if not then it return NULL.

``` c
LL_NODE* Mynode = ll_find(&list, "Something");
```

## Future
### To Do
___
* Create a linked list
	* [x] Simple linked list
	* [x] Circular linked list
* Simple list
	* Add a node to the list
		* [x] Add to top
		* [x] Add to bottom
		* [ ] Add after a node
		* [ ] Add before a node 
	* Remove a node
		* [x] Remove a element
		* [x] Remove top element
		* [x] Remove bottom element
	* [x] Find a node
* Circular list
	* /*UNDER CONSTRUCTION*/