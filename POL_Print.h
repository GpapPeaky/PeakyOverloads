#ifndef _POL_PRINT_H_
/**
 * @brief PeakyOverload printing macros and functions
 */
#define _POL_PRINT_H_

#include <string.h>

#define POL_SizeOfTypePrint(type) printf("PPOL: size of " #type ": %zu bytes\n", sizeof(type))

#define POL_PrintPointerAsType(pointer, format) \
    do { \
        if (strcmp(format, "%d") == 0) { \
            printf("%d", *((int*)(pointer))); \
        } else if (strcmp(format, "%f") == 0) { \
            printf("%.2f", *((float*)(pointer))); \
        } else if (strcmp(format, "%lf") == 0) { \
            printf("%lf", *((double*)(pointer))); \
        } else if (strcmp(format, "%c") == 0) { \
            printf("%c", *((char*)(pointer))); \
        } else if (strcmp(format, "%lld") == 0) { \
            printf("%lld", *((int64_t*)(pointer))); \
        } else if (strcmp(format, "%llu") == 0) { \
            printf("%llu", *((uint64_t*)(pointer))); \
        } else { \
            printf("Unknown format"); \
        } \
        printf("\n"); \
    } while(0)

#endif