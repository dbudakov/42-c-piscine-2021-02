#include "../../include/libft.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    size_t i = 0;
    int size = 0;
    t_list *list = begin_list;
    
    size = ft_list_size(list);
    if (size < nbr)
        return NULL;
    while((list->next != NULL) && i < nbr)
    {    
        list = list->next;
        i++;
    }
    return list;
}