#include "../../include/libft.h"

void ft_strs_to_tab_check(void)
{
    int i = 0;
    char **av = NULL;
    t_stock_str *stock_str_av = NULL;

    av = (char **)malloc(200);
    av[0] = "hello";
    av[1] = "developers";
    av[2] = "!";

    ft_putstr("ft_strs_to_tab: ");
    stock_str_av = ft_strs_to_tab(3, av);
    if (5 == stock_str_av[0].size)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}