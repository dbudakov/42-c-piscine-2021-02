#include "../../include/libft.h"

void ft_count_if_check(void)
{
    char **tab = NULL;
    int length = 3;

    tab = (char **)malloc(sizeof(char *) * 4);
    tab[0] = ft_strdup("HELLO");
    tab[1] = ft_strdup(" ");
    tab[2] = ft_strdup("DEVELOPERS");
    tab[3] = ft_strdup("!");

    ft_putstr("ft_count_if: ");
    if (2 == ft_count_if(tab, length, &ft_str_is_uppercase))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}