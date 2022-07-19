#include "../../include/libft.h"

void ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
    while(begin_list -> next != NULL)
    {
        f((void *)begin_list->data);
        begin_list = begin_list -> next;
    }
    f((void *)begin_list->data);
}