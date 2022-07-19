#include "../../include/libft.h"

t_list *ft_list_push_strs(int size, char **strs)
{
    int i = 0;
    t_list *list = ft_create_elem(strs[i]);

    while(i < size)
        ft_list_push_front(&list, strs[i++]);
    return list;
}