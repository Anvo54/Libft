/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avornane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:18:08 by avornane          #+#    #+#             */
/*   Updated: 2019/10/28 14:54:49 by avornane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int i;
	int neg;

	neg = 1;
	i = 0;
	result = 0;
	while (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] < 48 && str)
	{
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result = result * neg;
	return (result);
}
