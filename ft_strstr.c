/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:46:38 by avornane          #+#    #+#             */
/*   Updated: 2019/10/28 12:47:05 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		search_needle(const char *haystack, const char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			return (0);
		}
		haystack++;
		needle++;
	}
	return (*needle == '\0');
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			if ((*haystack == *needle) && search_needle(haystack, needle))
			{
				return ((char*)needle);
			}
		haystack++;
	}
	return (NULL);
}
