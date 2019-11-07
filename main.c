#include "libft.h"

int main()
{
    t_list *new_list;
    t_list *second_elem;
    t_list *terttu;

    new_list = ft_lstnew("Hello", 6);
    second_elem = (t_list*)malloc(sizeof(t_list));
    second_elem->content = "GuruGuru";
    second_elem->content_size = 9;

    ft_lstadd(&new_list, second_elem);

    terttu = ft_lstmap(new_list, ));
    return(0);
}