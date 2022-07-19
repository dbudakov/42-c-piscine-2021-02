#include "../../include/libft.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *tmp_list = ft_create_elem(data); 
    t_list *list = ft_list_last(*begin_list);;
    if (NULL == *begin_list)
        *begin_list = tmp_list;
    else 
        list->next = tmp_list;
}