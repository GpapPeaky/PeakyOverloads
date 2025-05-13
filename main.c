#include "POL.h"

Uint32 main(void){

    void* p1;
    void* p2 = POL_AllocateMemory(5, 2);
    void* p3 = POL_AllocateMemory(10, 1);

    POL_DeallocateMemory(p2);
    POL_DeallocateMemory(p3);
    POL_DeallocateMemory(p1);

    return 0;
}