#include <libc/string.h>

// memset
// void *memset(void *bufptr, int value, size_t size)
void *memset(void *dst, int c, uint n)
{
    uchar *buf = (uchar *)dst;
    for (uint i = 0; i < n; i++)
        buf[i] = (uchar)c;
    return dst;
}