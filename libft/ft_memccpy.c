#include <string.h>

void *ft_memccpy(void * dst, const void * src, int c, size_t n)
{
    unsigned char *cpy;
    int i;

    *cpy = (unsigned char)dst;
    i = 0;
    while (i <= n && (unsigned char)src != c)
    {
        *cpy = (char)src;
        src++;
        cpy++;
        i++;
    }  
    return (dst);
}