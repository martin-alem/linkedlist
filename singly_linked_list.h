//
// Created by Martin Alemajoh on 9/14/2020.
//
#ifndef DATASTRUCTURE_SINGLY_LINKED_LIST_H
#define DATASTRUCTURE_SINGLY_LINKED_LIST_H

/*
 * structure to represent a node in a linked list
*/
typedef struct node{
    const void *data;
    struct node *next;
}Node;


/*
 * structure to represent a linked list
*/
typedef struct slinkedlist {
    Node *head;
    Node *tail;
}SLinkedList;


/*
 * DEF: Initialize SLinkedList
 * PARAM1: SLinkedList *list - single linkedlist structure to be initialize
 * RETURN: returns void
*/
void initList(SLinkedList *list);

/*
 * DEF: Frees a node allocated with malloc
 * PARAM1: void **node - address of pointer to node
 * RETURN: returns void
*/
void freeNode(void **node);

/*
 * DEF: Clears a list and frees all allocated node
 * PARAM1: SLinkedList *list - single linkedlist structure to be cleared
 * RETURN: returns void
*/
void clearList(SLinkedList *list);

/*
 * DEF: inserts data to the list
 * PARAM1: SLinkedList *list - single linkedlist structure.
 * PARAM2: const void *type - data to be stored in list
 * RETURN: pointer to node otherwise NULL
*/
Node *addList(SLinkedList *list, const void *data);

/*
 * DEF: removes data from front of the list
 * PARAM1: SLinkedList *list - single linkedlist structure
 * RETURN: returns void
*/
void removeFront(SLinkedList *list);

/*
 * DEF: gets the number of elements in a list
 * PARAM1: SLinkedList *list - single linkedlist structure
 * RETURN: returns number of elements
*/
unsigned int getSize(SLinkedList *list);

/*
 * DEF: returns a pointer to the data at a particular index
 * PARAM1: SLinkedList *list - single linkedlist structure
 * PARAM2: int index - index of data in list
 * RETURN: returns a pointer to data;
*/
void *get(SLinkedList *list, int index);


/*
 * DEF: removes the element next to the one whose index is provided
 * PARAM1: SLinkedList *list - single linkedlist structure
 * PARAM2: int index - index of data in list
 * RETURN: returns void
*/
void removeNext(SLinkedList *list, int index);


#endif //DATASTRUCTURE_SINGLY_LINKED_LIST_H
