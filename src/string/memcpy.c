#include <libc/string.h>

// memcpy
// void *memcpy(void *restrict dstptr, const void *restrict dstptr, size_t size)
void *memcpy(void *restrict dstptr, const void *restrict srcptr, uint n)
{
    uchar *dst = (uchar *)dstptr;
    const uchar *src = (uchar *)srcptr;

    for (uint i = 0; i < n; i++)
        dst[i] = src[i];
    return dstptr;
}