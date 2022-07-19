#include "../../include/libft.h"

int ft_list_size(t_list *begin_list)
{
    size_t i = 0;
    t_list *list;

    list = begin_list;

    if (begin_list == NULL)
        return 0;
    while (list->next != NULL)
    {
        list = list->next;
        i++;
    }
    i++;
    return i;
}