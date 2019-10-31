/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:37:42 by avornane          #+#    #+#             */
/*   Updated: 2019/10/28 15:52:07 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		search_needle_len(const char *haystack, const char *needle, size_t len)
{
	while (*haystack && *needle && len)
	{
		if (*haystack != *needle)
		{
			return (0);
		}
		haystack++;
		needle++;
		len--;
	}
	return (*needle == '\0');
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	while (*haystack != '\0' && len)
	{
		if ((*haystack == *needle) && \
			search_needle_len(haystack, needle, len))
		{
			return ((char*)needle);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
