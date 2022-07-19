#include "../../include/libft.h"

/* •This program should display         */
/* I have an even number of arguments.  */
/* •ou                                  */
/* I have an odd number of arguments.   */

void ft_putstr(char *str)
{
    while (*str)
    write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}

int ft_boolean(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr(EVEN_MSG);
    else
        ft_putstr(ODD_MSG);
    return (SUCCESS);
}
