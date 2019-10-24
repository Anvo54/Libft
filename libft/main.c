#include <stdio.h>
#include <string.h>

void *ft_memccpy(void * dst, const void * src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

int main()
{
    char str[50] = "Testing memccpy function";
	char str2[50];
    char str3[50];

	memccpy(str2, str, 'n', 8);

	printf("%s\n", str2);

    ft_memccpy(str3, str, 'n', 8);

    printf("%s\n", str3);

    /***Test of memmove********/

    char mstr[50] = "Shpongle - Tales of the inexpressible";
    char e_mstr[50];

    char ft_mstr[50] = "Shpongle - Tales of the inexpressible";
    char ft_e_mstr[50];

    memmove(&e_mstr, &mstr, 25);

    printf("%s\n", e_mstr);
    printf("%s\n", mstr);

    ft_memmove(&ft_e_mstr, &ft_mstr, 25);

    printf("%s\n", ft_e_mstr);
    printf("%s\n", ft_mstr);
	return(0);
}