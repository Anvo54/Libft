#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *cpy_dst;
	unsigned char *cpy_srt;

	cpy_dst = (unsigned char*)dst;
	cpy_srt = (unsigned char*)src;

	while (len)
	{
		*cpy_dst = *cpy_srt;
		cpy_srt++;
		cpy_dst++;
		len--;
	}
	return (dst);
}