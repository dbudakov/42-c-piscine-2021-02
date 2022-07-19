#include "../../include/libft.h"

t_list *ft_create_elem(void *data)
{
    t_list *list = NULL;
    list = (t_list *)malloc(sizeof(t_list));
    list->data = ft_strdup(data);
    list->next = NULL;
    return list;
}