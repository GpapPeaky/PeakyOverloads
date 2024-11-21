#include "POL.h"

Uint32 main(void){

    POL_SizeOfTypePrint(Sint64);
    POL_SizeOfTypePrint(Sint32);
    POL_SizeOfTypePrint(Sint16);
    POL_SizeOfTypePrint(Sint8);
    POL_SizeOfTypePrint(Reference);

    List list;

    POL_AddToList(1, list);
    POL_AddToList(2, list);
    POL_AddToList(3, list);
    POL_AddToList(4.5, list);
    POL_AddToList(5.9, list);
    POL_AddToList(6, list);

    POL_PrintList(list, intF);

    return 0;
}