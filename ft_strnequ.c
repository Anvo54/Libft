/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:24:43 by avornane          #+#    #+#             */
/*   Updated: 2019/10/31 11:27:10 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (1);
}
