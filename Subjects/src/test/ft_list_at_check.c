#include "../../include/libft.h"

void ft_list_at_check(void)
{
    t_list *list;
    t_list *at;

    list = ft_create_elem("first");
    ft_list_push_back(&list, "second");
    ft_list_push_back(&list, "third");
    ft_list_push_back(&list, "fourth");
    ft_list_push_back(&list, "fifth");
    
    at = ft_list_at(list, 4);
    ft_putstr("ft_list_at: ");
    if (0 == ft_strcmp("fifth", at->data))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}