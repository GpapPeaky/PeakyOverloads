#ifndef _POL_LIST_H_
/**
 * @brief PeakyOverload for lists/vectors
 */
#define _POL_LIST_H_

#include "POL_Primitives.h"

/* Simply Linked List Node */
typedef struct SimplyLinkedListNode{
    struct SimplyLinkedListNode* next;
    Reference* data; /* Array of References */
}SimplyLinkedListNode;

typedef SimplyLinkedListNode Node; /* Default Node */

/* Double Linked List Node */
typedef struct DoubleLinkedListNode{
    struct DoubleLinkedListNode* next;
    struct DoubleLinkedListNode* prev;
    Reference* data; /* Array of References */
}DoubleLinkedListNode;

typedef DoubleLinkedListNode DNode; /* Double Linked Node */

/* List Type */
typedef Node List;

/* Double Linked List Type */
typedef DNode DList;

/**
 * @brief Initialises a list
 * 
 * @param list List type to initialise
 * 
 * @returns A pointer to the intialised list
 */
List* POL_InitialiseList(List* list);

/**
 * @brief Adds data to a list
 * 
 * @param data Data to add
 * @param list List to add the data to
 * 
 * @returns Pointer to the data added
 */
Reference* POL_AddToList(Reference* data, List* list);

/**
 * @brief Removes data from a list
 * 
 * @param data Data to remove
 * @param list List to remove the data from
 * 
 * @returns Pointer to the removed data
 */
Reference* POL_RemoveFromList(Reference* data, List* list);

#endif
