#include "../../include/libft.h"

t_list *ft_list_last(t_list *begin_list)
{
    t_list *list = begin_list;

    while (list->next != NULL)
        list = list->next;
    return list;
}