#ifndef _POL_LIST_H_
/**
 * @brief PeakyOverload for lists/vectors
 */
#define _POL_LIST_H_

#include "POL_Primitives.h"
#include "POL_Print.h"
#include "POL_Format.h"
#include <stdlib.h> /* For NULL, and malloc */
#include <stdio.h> /* For NULL, and malloc */

#define POL_LIST_HEADER_DATA -1 /* Header data, cast to integer for lists */

/* Simply Linked List Node */
typedef struct SimplyLinkedListNode{
    struct SimplyLinkedListNode* next;
    Reference data; /* Array of References */
}SimplyLinkedListNode;

typedef SimplyLinkedListNode* Node; /* Default Node */

/* Double Linked List Node */
typedef struct DoubleLinkedListNode{
    struct DoubleLinkedListNode* next;
    struct DoubleLinkedListNode* prev;
    Reference data; /* Array of References */
}DoubleLinkedListNode;

typedef DoubleLinkedListNode* DNode; /* Double Linked Node */

/* List Type */
typedef Node* List;

/* Double Linked List Type */
typedef DNode* DList;

/**
 * @brief Adds data to a list
 * 
 * @param data Data to add, memory is allocated
 * @param list List to add the data to, list header is also created here
 * 
 * @returns Pointer to the data added
 */
Reference* POL_AddToList(Sint64 data, List list);

/**
 * @brief Removes data from a list
 * 
 * @param data Data to remove
 * @param list List to remove the data from
 * 
 * @returns Pointer to the removed data
 */
Reference* POL_RemoveFromList(Sint64 data, List list);

/**
 * @brief Prints all the data, inside the nodes of a list
 * 
 * @param list List to print
 * @param format Format to use, and casts to do when printing
 */
void POL_PrintList(List list, const char* format);

#endif
