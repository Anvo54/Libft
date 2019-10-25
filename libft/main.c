#include "libft.h"

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

    printf("memmove 25 result: %s\n", e_mstr);
    printf("memmove source: %s\n", mstr);
	
	//memmove(&e_mstr, mstr, -3);
    ft_memmove(&ft_e_mstr, &ft_mstr, -3);

	printf("memmove: %s", e_mstr);
    printf("ft_memmove: %s\n", ft_e_mstr);
    printf("%s\n", ft_mstr);
	return(0);
}
