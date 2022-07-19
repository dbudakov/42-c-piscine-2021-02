#include "../../include/libft.h"

void ft_put_tab_string(char **tab)
{
    int i = 0;
    while(tab[i] != NULL)
    {
        ft_putstr(tab[i]);
        if (tab[i + 1] != NULL)
            ft_putstr(", ");
        i++;
    }
}