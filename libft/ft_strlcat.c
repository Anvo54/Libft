#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = ft_strlen(dst);
	j = 0;
	while (i + 1 < dstsize && *src != '\0')
	{
		dst[i] = *src;
		src++;
		i++;
		j++;
	}
	dst[(i + j) + 1] = '\0';
	return (dst);
}