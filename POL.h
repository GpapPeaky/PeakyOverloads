#ifndef __POL_H__
/**
 * @brief PeakyOverload library, for C/C++ types
 */
#define __POL_H__

#include <stdio.h>
#include <stdlib.h>

#ifndef __POL_PRIMITIVES__
/**
 * @brief PeakyOverload primitives, will be used in other headers as well.
 */
#define __POL_PRIMITIVES__

typedef unsigned int Uint32; /* 32bit / 4byte unsigned integer */
typedef unsigned char Uint8; /* 8bit / 1byte unsigned integer */
typedef unsigned short Uint16; /* 16bit / 2byte unsigned integer */
typedef unsigned long long Uint64; /* 64bit / 8byte unsigned integer */

typedef signed int Sint32; /* 32bit / 4byte signed integer */
typedef signed char Sint8; /* 8bit / 1byte signed integer */
typedef signed short Sint16; /* 16bit / 2byte signed integer */
typedef signed long long Sint64; /* 64bit / 8byte signed integer */

/* Unsigned Overloads */

typedef Uint32 uint32_t;
typedef Uint8 uint8_t;
typedef Uint16 uint16_t;
typedef Uint64 uint64_t;

typedef Uint32 uint32;
typedef Uint8 uint8;
typedef Uint16 uint16;
typedef Uint64 uint64;

/* Signed Overloads */

typedef Sint32 sint32;
typedef Sint8 sint8;
typedef Sint16 sint16;
typedef Sint64 sint64;

typedef Sint32 int32;
typedef Sint8 int8;
typedef Sint16 int16;
typedef Sint64 int64;

typedef Sint32 int32_t;
typedef Sint8 int8_t;
typedef Sint16 int16_t;
typedef Sint64 int64_t;

/* Boolean Overloads */

typedef Sint8 boolean;
typedef Sint8 Boolean;
typedef Sint8 Bool;

/* Pointer Overloads */

typedef Uint32* Uint32p;
typedef Uint8* Uint8p;
typedef Uint16* Uint16p;
typedef Uint64* Uint64p;

typedef Uint32* uint32_p_t;
typedef Uint8* uint8_p_t;
typedef Uint16* uint16_p_t;
typedef Uint64 *uint64_p_t;

typedef Uint32* uint32p;
typedef Uint8* uint8p;
typedef Uint16* uint16p;
typedef Uint64* uint64p;

typedef Sint32* sint32p;
typedef Sint8* sint8p;
typedef Sint16* sint16p;
typedef sint64* sint64p;

typedef Sint32* sint32_p_t;
typedef Sint8* sint8_p_t;
typedef Sint16* sint16_p_t;
typedef Sint64 *sint64_p_t;

typedef Sint32* sint32p;
typedef Sint8* sint8p;
typedef Sint16* sint16p;
typedef Sint64* sint64p;

#endif /* POL_Primitives */

#ifndef __POL_ERROR__
#define __POL_ERROR__

//...

#endif /* POL_Error */

#ifndef __POL_ALLOCATION__
#define __POL_ALLOCATION__

/* Null, 0 */
#define POL_Nil NULL

/**
 * @brief Allocates memory for
 * elements of specific size
 * 
 * @param sizeOfElementInBytes Byte to allocate per element
 * @param numOfElements Elements to create
 * 
 * @returns A pointer to the newly allocated memory, else
 * it returns nil if the allocation fails
 */
static inline void* POL_AllocateMemory(Uint32 sizeOfElementInBytes, Uint32 numOfElements){
    void* p = (void*)malloc(sizeOfElementInBytes * numOfElements);
    if(!p){
        fprintf(stderr, "POLerr: Failled to allocate memory\n");
        return POL_Nil;
    }

    return p;
}

/**
 * @brief Frees the memory deallocated by a pointer
 * 
 * @param p Pointer to free
 * 
 * @returns 0 on success, 1 on failure (i.e pointer is null)
 */
static inline Uint8 POL_DeallocateMemory(void* p){
    if(!p){
        fprintf(stderr, "POLerr: Failed to free memory, pointer is null\n");
        return 1;
    }

    free(p);
    return 0;
}

#endif /* POL_Allocation */

#endif /* POL */
