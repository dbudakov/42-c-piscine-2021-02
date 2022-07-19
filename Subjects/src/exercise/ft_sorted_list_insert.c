#include "../../include/libft.h"

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    int i = 0;
    t_list *buff = NULL;
    t_list *elem = NULL;
    t_list *prev = NULL;
    t_list *list = *begin_list;


    while(list->next != NULL)
    {
        if (0 > cmp(data, list->data))
        {
            if (list == *begin_list)
                ft_list_push_front(begin_list, data);
            else
            {
                elem = ft_create_elem(data);
                prev = ft_list_at(*begin_list, i - 1);
                prev -> next = elem;
                elem -> next = list;
            }
            return;

        }
        list = list->next;
        i++;
    }
    ft_list_push_back(begin_list, data);

}