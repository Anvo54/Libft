#include <stdio.h>
#include "libft.h"

int numlen(int n)
{
	int i;

	i = 0;
	if(n < 0)
		n = n * -1;
	while(n > 0)
	{
		n = n / 10;
		i++;
	}
	return(i);
}

char        *ft_itoa(int n)
{
	int		i;
	char	*str;

	i = numlen(n);
	str = (char*)malloc(sizeof(str) * (i + 1));
		if(str == NULL)
			return(NULL);
	str[i--] = '\0';
	if(n == 0)
	{
		str[0] = '0';
		return(str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n = n / 10;
		i--; 
	}
	return (str);
}