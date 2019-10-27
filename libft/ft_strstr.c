#include "libft.h"
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    while (*haystack)
    {
        //printf("%c", *needle);
        if(*haystack == *needle)
        {
            printf("%c", *needle);
            while (*haystack == *needle)
            {
                printf("%c", *needle);
                if (*needle == '\0')
                {
                    return((char*)needle);
                }
                haystack++;
                needle++;
            }
        }
        haystack++;
        needle++;
    }
    return(NULL);
}