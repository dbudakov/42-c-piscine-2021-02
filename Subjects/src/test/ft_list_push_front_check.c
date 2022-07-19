#include "../../include/libft.h"

void ft_list_push_front_check(void)
{
    char *str1 = ft_strdup("old_front");
    char *str2 = ft_strdup("new_front");
    t_list *list;

    ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
    ft_putstr("ft_list_push_front: ");
    if (0 == ft_strcmp(list->data, str2))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}