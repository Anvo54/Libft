#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *value;

    value = NULL;
    while(*s != '\0')
    {
        if (*s == (char)c)
        {
            value = (char*)s;
        }
        s++;
    }
    return (value);
}