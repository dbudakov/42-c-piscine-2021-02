#include "../../include/libft.h"

t_list *ft_list_prev_at(t_list **begin_list, t_list *elem)
{
    t_list *list = *begin_list;
    if (list == elem)
        return list;
    while ((list -> next != elem) && (list->next != NULL))
        list = list->next;
    return list;
}

void ft_swap_elem(t_list **list, t_list *src, t_list *dest)
{
    t_list *buff = NULL;
    t_list *prev_src = ft_list_prev_at(list, src);
    t_list *prev_dest = ft_list_prev_at(list, dest);
    
    if (prev_src != src && prev_dest != dest)
    {
        prev_src->next = dest;
        prev_dest->next = src;
        buff = src->next;
        src->next = dest->next;
        dest->next = buff;
    }
    else if (prev_src == src)
    {
        prev_dest->next = src;
        *list = dest;        
        buff = src->next;
        src->next = dest->next;
        dest->next = buff;
    }
}