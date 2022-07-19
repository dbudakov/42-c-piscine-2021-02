#include "../../include/libft.h"

void ft_show_tab_check(void)
{
    int i = 0;
    int output = 0;
    char **av = NULL;
    t_stock_str *par = NULL;

    av = (char **)malloc(200);
    av[0] = "hello";
    av[1] = "developers";
    av[2] = "!";
    par = ft_strs_to_tab(3, av);
    
    ft_putstr("ft_show_tab: ");
    if (1 == output)
    {
        ft_putstr("\n");
        ft_show_tab(par);    
    }
    else
        printf("%s\n", GREY("oversize output"));
}