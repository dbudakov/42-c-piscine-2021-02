#include "../../include/libft.h"

void free_fct(void *data)
{
    free(data);
}

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *buff = NULL;
    t_list *list = begin_list;
    
    while(list->next != NULL)
    {
        buff = list->next;
        free_fct(list->data);
        list->data = "";
        free(list);
        list = buff;
    }
    free_fct(list->data);
    free(list);
}