#include "../../include/libft.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *list = *begin_list;
    while (list->next != NULL)
    {
        if (0 == cmp(data_ref, list->data))
        {
            free_fct(list->data);
            list->data = "";
        }
        list = list->next;
    }

}