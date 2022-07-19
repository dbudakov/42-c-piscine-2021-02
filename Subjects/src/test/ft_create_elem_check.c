#include "../../include/libft.h"

void ft_create_elem_check(void)
{
    char *str = ft_strdup("Hello developers!");
    t_list *list;
    ft_putstr("ft_create_elem: ");
    list = ft_create_elem(str);
    if (0 == ft_strcmp(list->data, str))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}