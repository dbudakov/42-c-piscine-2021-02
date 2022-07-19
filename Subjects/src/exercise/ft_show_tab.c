#include "../../include/libft.h"

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while (NULL != par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putstr("\n");
        ft_putnbr(par[i].size);
        ft_putstr("\n");
        ft_putstr(par[i].str);
        ft_putstr("\n");
        i++;
    }
}