#include "libft.h"
#include <stdlib.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}


int main()
{
	t_list *elem;

	
	char	str [] = "lorem ipsum dolor sit";
	/*
	if (!(elem = ft_lstnew(str, (sizeof(str)))))
			ft_print_result("NULL");
	else
	{
		if (!(elem->content))
			ft_print_result("NULL");
		else
		{
			ft_print_result(elem->content);
			write(1, "\n", 1);
		}
			ft_print_result2(elem->content_size);
		if (!(elem->next))
		{
			write(1, "\n", 1);
			ft_print_result("NULL");
		}
	} */

	if (!(elem = ft_lstnew(NULL, 5)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
			{
				ft_print_result("NULL");
				write(1, "\n", 1);
			}
			else
			{
				ft_print_result(elem->content);
				write(1, "\n", 1);
			}
				ft_print_result2(elem->content_size);
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
	return (0);
}
