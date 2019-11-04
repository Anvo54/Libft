/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:35:49 by avornane          #+#    #+#             */
/*   Updated: 2019/11/04 17:30:55 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = malloc(sizeof(*content) * content_size);
	if (!tmp)
		return (NULL);
	if (tmp)
	{
		tmp->content = NULL;
		tmp->next = NULL;
	}
	return tmp;
}
