#include <string.h>
#include <stdio.h>

void *ft_memccpy(void * dst, const void * src, int c, size_t n)
{
	unsigned char *cpy;
	unsigned char *src_copy;
	int i;

	cpy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;

	while (n)
	{
		*cpy = *src_copy;
		cpy++;
		if (*src_copy == c)
			return (dst);
		src_copy++;
		n--;
	}
	return (dst);
}