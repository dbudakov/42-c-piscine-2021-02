#include "../../include/libft.h"

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (ft_non_printable(str[i]) == 1)
            ft_putstr("\\0");
        else
            ft_putchar(str[i]);
        i++;
    }

}
