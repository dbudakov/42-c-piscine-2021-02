#include "../../include/libft.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *list = NULL;

    while(begin_list -> next != NULL)
    {
        if (0 == cmp(data_ref, begin_list -> data))
            return begin_list;
        begin_list = begin_list -> next;
    }
    return NULL;
}