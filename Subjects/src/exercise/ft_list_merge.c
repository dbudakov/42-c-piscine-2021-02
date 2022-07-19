#include "../../include/libft.h"

void ft_list_merge(t_list **begin_list1, t_list **begin_list2)
{
    t_list *list = *begin_list1;
    while (list -> next != NULL)
        list = list->next;
    list->next = *begin_list2;
}