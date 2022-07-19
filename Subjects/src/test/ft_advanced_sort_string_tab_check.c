#include "../../include/libft.h"

void ft_advanced_sort_string_tab_check(void)
{
    int output = 0;
    char **tab = NULL;

    tab = (char **)malloc(sizeof(char *) * 11);
    tab[0] = ft_strdup("0g");
    tab[1] = ft_strdup("0e");
    tab[2] = ft_strdup("0f");
    tab[3] = ft_strdup("0d");
    tab[4] = ft_strdup("0k");
    tab[5] = ft_strdup("0h");
    tab[6] = ft_strdup("0b");
    tab[7] = ft_strdup("0c");
    tab[8] = ft_strdup("0i");
    tab[9] = ft_strdup("0a");
    tab[10] = NULL;

    ft_putstr("ft_advanced_sort_string_tab_check: ");
    if (1 == output)
    {    
        ft_putstr("\n");
        ft_put_tab_string(tab);
        ft_advanced_sort_string_tab(tab, &ft_strcmp);
        ft_putstr("\n");
        ft_put_tab_string(tab);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("oversize output"));
}