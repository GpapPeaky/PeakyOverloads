#include "POL_List.h"

Reference* POL_AddToList(Sint64 data, List list){
    if(list == NULL){
        list = (List)malloc(sizeof(Node*));
        (*list)->data = (void*)POL_LIST_HEADER_DATA; /* No data assigned at header of list,
        cast it to check if a specific node is a header */
        (*list)->next = NULL; /* Set the next as NULL to terminate traversal */
    }

    /* Create the node */
    Node listNode = (Node)malloc(sizeof(SimplyLinkedListNode));
    Sint64* newData = (Sint64*)malloc(sizeof(Sint64));
    *newData = data;
    listNode->data = (Reference)newData; /* To be casted */

    listNode->next = *list; /* Make it point to the head */
    *list = listNode; /* Header moves one node up */

    return &(listNode->data);
}

void POL_PrintList(List list, const char* format){
    if(list == NULL || *list == NULL){
        fprintf(stderr, "List is null\n");
        return;
    }

    Node traverse = *list;


    while(traverse != NULL){
        POL_PrintPointerAsType(traverse->data, format);

        traverse = traverse->next;
    }

    return;
}
