#include "../../include/libft.h"

void ft_list_size_check(void)
{
    t_list *list = NULL;

    list = ft_create_elem("first");
    ft_list_push_front(&list, "second");
    ft_list_push_front(&list, "third");
    ft_list_push_front(&list, "fourth");
    
    ft_putstr("ft_list_size: ");
    if (4 == ft_list_size(list))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}