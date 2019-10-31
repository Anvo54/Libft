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

char	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

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
