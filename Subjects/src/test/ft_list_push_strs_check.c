#include "../../include/libft.h"

void ft_list_push_strs_check(void)
{
    int size = 5;
    t_list *list;
    t_list *last;
    char **strs = (char **)malloc(sizeof(char *) * size);
    strs[0] = ft_strdup("first");
    strs[1] = ft_strdup("second");
    strs[2] = ft_strdup("third");
    strs[3] = ft_strdup("fourth");
    strs[4] = ft_strdup("fifth");


    list = ft_list_push_strs(size, strs);
    last = ft_list_last(list);
    ft_putstr("ft_list_push_strs: ");
    if ((0 == ft_strcmp(list->data, strs[4])) && (0 == ft_strcmp(last->data, strs[0])))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}