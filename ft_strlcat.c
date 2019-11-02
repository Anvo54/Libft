/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:34:15 by avornane          #+#    #+#             */
/*   Updated: 2019/10/28 12:35:37 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= i)
		result = ft_strlen(dst) + dstsize;
	else
		result = ft_strlen(dst) + ft_strlen(src);
	int k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	
	printf("\n%i", k);
	printf("\n%zu", ft_strlen(src));

	while (i + 1 < dstsize && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[(i)] = '\0';
	return (result);
}
