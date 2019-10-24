#include <stdio.h>
#include <string.h>

void *ft_memccpy(void * dst, const void * src, int c, size_t n);

int main()
{
    char str[50] = "Testing memccpy function";
	char str2[50];
    char str3[50];

	memccpy(str2, str, 'n', 8);

	printf("%s\n", str2);

    ft_memccpy(str3, str, 'n', 8);

    printf("%s\n", str3);
	return(0);
}