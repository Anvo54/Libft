/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:15:00 by avornane          #+#    #+#             */
/*   Updated: 2019/10/31 15:22:14 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int get_word_count(char const *s, char c)
{
	int result;
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	result = 0;
	while (i < len)
	{
		if(s[i] != c && i < len)
		{
			result++;
			while (s[i] != c && i < len)
			{
				i++;
			}
		}
		i++;
	}
	return result;
}

char *add_word(char const *s, char c, int *j)
{
	int len;
	size_t s_size;
	unsigned int start;
	char *str;

	s_size = 0;
	start = 0;
	len = ft_strlen(s);
	while (*j < len)
	{
		printf("We are here %i time", *j);
		if(s[*j] != c && *j < len)
		{
			start = *j;
			while (s[*j] != c && *j < len)
			{
				s_size++;
				(*j)++;
			}
		}
		str = ft_strsub(s, start, s_size);
			if(str != NULL)
				return(str);
		(*j)++;
	}
	return (NULL);
}

char **ft_strsplit(char const *s, char c)
{
	char **fresh;
	int words;
	int i;
	int j;

	i = 0;
	j = 0;
	words = get_word_count(s, c);

	fresh = malloc(sizeof(fresh) * words);
	while (i <= words)
	{
		*fresh = add_word(s, c, &j);
		printf("%i", j);
		printf("%s\n", *fresh);
		fresh++;
		i++;
	}
	
	printf("\nWords: %i\n", words);
	return (fresh);
}
