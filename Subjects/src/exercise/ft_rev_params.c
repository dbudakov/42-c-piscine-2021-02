#include "../../include/libft.h"

void ft_rev_params(int argc, char *argv[])
{
    argc--;
    while(argc > 0)
    {
        ft_putstr(argv[argc--]);
        ft_putchar(' ');
    }
}