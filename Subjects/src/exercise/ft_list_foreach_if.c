#include "../../include/libft.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    while(begin_list->next != NULL)
    {
        if (0 == cmp(begin_list->data, data_ref))
            f(begin_list->data);
        begin_list = begin_list->next;
    }
}