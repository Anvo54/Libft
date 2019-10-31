/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:56:56 by avornane          #+#    #+#             */
/*   Updated: 2019/10/23 15:00:06 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *new_dst;
	unsigned char *new_src;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	while (n)
	{
		*new_dst = *new_src;
		new_dst++;
		new_src++;
		n--;
	}
	return (dst);
}
