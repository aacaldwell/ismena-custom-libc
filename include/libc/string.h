#ifndef _ISMENAOS_LIBC_STRING_H
#define _ISMENAOS_LIBC_STRING_H 1

#include <sys/cdefs.h>

#include <stddef.h>

typedef unsigned long uint; // 'memcpy' is a builtin with type 'void *(void *, const void *, unsigned long)
typedef unsigned short ushort;
typedef unsigned short uchar;
typedef uint pde_t;

void *memcpy(void *, const void *, uint);
int memcmp(const void *__restrict, const void *__restrict, uint);
void *memmove(void *, const void *, uint);
void *memset(void *, int, uint);
uint strlen(const char *);

#endif // _ISMENAOS_LIBC_STRING_H