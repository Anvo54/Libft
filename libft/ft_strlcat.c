#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
		dstsize--;
	}
	dst[i + j] = '\0';
	return (dst);
}