#include "../../include/libft.h"

void ft_is_sort_check(void)
{
    int tab1[] = {0, 1, 2, 3, 4};
    int tab2[] = {0, 1, 2, 5, 4};
    int length = 5;

    ft_putstr("ft_is_sort: ");
    if ((1 == ft_is_sort(tab1, length, &ft_granted_them)) && (1 != ft_is_sort(tab2, length, &ft_granted_them)))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}