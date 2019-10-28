#include "libft.h"
#include <stdio.h>

int search_needle_len(const char *haystack, const char *needle, size_t len)
{
    while (*haystack && *needle && len)
    {
        if (*haystack != *needle)
        {
            return (0);
        }
        haystack++;
        needle++;
        len--;
    }
    return (*needle == '\0');
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    while (*haystack != '\0' && len)
    {
        printf("%zu", len);
        if(*haystack == *needle)
        if ((*haystack == *needle) && search_needle_len(haystack, needle, len))
        {
            return((char*)needle);
        }
        haystack++;
        len--;
    }
    return(NULL);
}