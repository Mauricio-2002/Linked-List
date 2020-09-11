 # **Linked list for C**

Header file for C linked lists.

About linked lists: [Wikipedia: Linked Lists](https://en.wikipedia.org/wiki/Linked_list)

## *Index*
---
* **How to use**
	1. [Create a linked list](#create-a-linked-list)
		* [Simple linked list](#simple-linked-list)
	2. [Add a node to the list](#add-a-node-to-the-list)
		* [Add to top](#add-to-top)
		* [Add to bottom](#add-to-bottom)
	3. [Remove a node](#remove-a-node)
		* [Remove a element](#remove-a-element)
		* [Remove first element](#remove-first-element)
		* [Remove last element](#remove-last-element)
	4. [Find a node](#find-a-node)
* **Future**
	* [To do](#to-do)


# How to use
===
## Create a linked list
---
Before creating a list you need to include lList.h on your file
``` c
#include"lList.h"
```
### **Simple linked list**
To create a linked list, you need to make a pointer to LL_NODE and set it to **`NULL`**.

```c
LL_NODE* list = NULL; // THIS IS A LINKED LIST
```
## Add a node to the list 
---
If the list has no value, use one of the following functions
### **Add to top**
To add a node to the top of the list use the following function
``` c
ll_add_top(&list, "Something")
```
This functions takes 2 arguments: A memory direction to the list, and a string.

The value given is pushed in the top of the list

#### Before adding a node
> `list -> ["A"] -> ["B"]`
#### After adding a node
> `list -> ["C"] -> ["A"] -> ["B"]`

### **Add to bottom**
To add a node to the bottom of the list use the following function
``` c
ll_add_bottom(&list, "Something")
```
This functions takes 2 arguments: A memory direction to the list, and a string.

The value given is pushed in the bottom of the list

#### Before adding a node
> `list -> ["A"] -> ["B"]`
#### After adding a node
> `list -> ["A"] -> ["B"] -> ["C"]`

