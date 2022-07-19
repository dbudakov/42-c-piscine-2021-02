#include "../../include/libft.h"

void ft_list_reverse(t_list **begin_list)
{
    int size = ft_list_size(*begin_list);
    int position = 0;
    int swap_position = 0;
    t_list *first = *begin_list;
    t_list *pre_last = ft_list_at(*begin_list, size - 2);
    t_list *last = ft_list_at(*begin_list, size - 1);

    position = (size / 2) - (size % 2);
    while (-1 < position)
    {
        swap_position = size - position - (size % 2);
        ft_swap_elem(begin_list, ft_list_at(*begin_list, position), ft_list_at(*begin_list, swap_position));
        position--;
    }

}
