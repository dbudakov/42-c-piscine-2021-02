#include "../../include/libft.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i = 0;
    t_stock_str *stock_str_av = NULL;
    stock_str_av = (t_stock_str *)malloc(sizeof(t_stock_str *) * (ac + 1));
    // stock_str[0] = (t_stock_str)malloc(sizeof(t_stock_str));
    while(i < ac)
    {
        stock_str_av[i].size = ft_strlen(av[i]);
        stock_str_av[i].str = av[i];
        stock_str_av[i].copy = ft_strdup(av[i]);
        i++;
    }
    stock_str_av[i].size = 0;
    stock_str_av[i].str = NULL;
    stock_str_av[i].copy = NULL;
    return stock_str_av;

}