#include <libc/string.h>

// memcmp
// int memcmp(const void *aptr, const void *bptr, size_t size)
int memcmp(const void *aptr, const void *bptr, uint n)
{
    uchar *a = (uchar *)aptr;
    uchar *b = (uchar *)bptr;
    for (uint i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            return -1;
        else if (b[i] < a[i])
            return 1;
    }
    return 0;
}