/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:09:42 by avornane          #+#    #+#             */
/*   Updated: 2019/10/31 12:27:08 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*fresh;
	int		i;

	i = 0;
	total = (ft_strlen(s1) + ft_strlen(s2)) + 2;
	fresh = ft_strnew(total);
	if (fresh == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		fresh[i] = s1[i];
		i++;
	}
	ft_strcat(fresh, s2);
	return (fresh);
}
