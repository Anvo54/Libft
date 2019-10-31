/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:12:01 by avornane          #+#    #+#             */
/*   Updated: 2019/10/30 16:32:05 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		len;
	int		i;

	i = 0;
	if (s == NULL || *f == NULL)
		return (NULL);
	len = ft_strlen((char*)s);
	fresh = (char*)malloc(sizeof(len) + 1);
	while (s[i] != 0)
	{
		fresh[i] = f(s[i]);
		i++;
	}
	return (fresh);
}
