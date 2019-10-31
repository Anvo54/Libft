/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:12:45 by avornane          #+#    #+#             */
/*   Updated: 2019/10/25 11:26:11 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *ptr, int c, size_t n)
{
	size_t		i;
	char	*new;

	i = 0;
	new = ptr;
	while (i < n)
	{
		*new = c;
		new++;
		i++;
	}
	return (new);
}