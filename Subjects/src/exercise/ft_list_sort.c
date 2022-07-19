#include "../../include/libft.h"


void ft_list_sort(t_list **begin_list, int (cmp)())
{
    int i = 1;
    int size = ft_list_size(*begin_list);
    t_list *list = *begin_list;
    t_list *next = NULL;
    t_list *max = list;

    while(size > 0)
    {
        i=0;
        while(i < size)
        {
            if (0 > cmp(max -> data, ft_list_at(list, i) -> data))
                max = ft_list_at(list, i);
            i++;
        }
        ft_swap_elem(begin_list, max, ft_list_at(list, size - 1));
        max = list;
        size--;
    }
    list = *begin_list;
    max = ft_list_at(list, 0);
    if (0 > cmp(max -> data, ft_list_at(list, 1) -> data))
        max = ft_list_at(list, 1);
    ft_swap_elem(begin_list, max, ft_list_at(list, 1));



}