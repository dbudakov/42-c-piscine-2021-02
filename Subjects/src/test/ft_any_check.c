#include "../../include/libft.h"

void ft_any_check(void)
{
    char **tab = NULL;

    tab = (char **)malloc(sizeof(char *) * 4);
    tab[0] = ft_strdup("HELLO");
    tab[1] = ft_strdup("X");
    tab[2] = ft_strdup("DEVELOPERS");
    tab[3] = NULL;

    ft_putstr("ft_any: ");
    if (1 == ft_any(tab, &ft_str_is_uppercase))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}