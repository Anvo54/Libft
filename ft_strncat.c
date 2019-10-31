/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:49:28 by avornane          #+#    #+#             */
/*   Updated: 2019/10/28 12:49:29 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (n < i)
		return (NULL);
	j = 0;
	while (n && s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
		n--;
	}
	s1[i + j] = '\0';
	return (s1);
}
