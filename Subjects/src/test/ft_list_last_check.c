#include "../../include/libft.h"

void ft_list_last_check(void)
{
    char *str1 = ft_strdup("last item");
    char *str2 = ft_strdup("other item");
    t_list *list = NULL;
    t_list *last = NULL;
    
    list = ft_create_elem(str1);
    ft_list_push_front(&list, str2);
    ft_list_push_front(&list, str2);
    ft_list_push_front(&list, str2);
    last = ft_list_last(list);
    ft_putstr("ft_list_last: ");
    if (0 == ft_strcmp(last->data, str1))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}