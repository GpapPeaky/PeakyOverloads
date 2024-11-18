#ifndef _POL_PRIMITIVES_H_
/**
 * @brief PeakyOverload primitives, will be used in other headers as well.
 */
#define _POL_PRIMITIVES_H_

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

typedef void* Pointer;
typedef void* pointer;
typedef void* Reference;
typedef void* reference;

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

#endif
