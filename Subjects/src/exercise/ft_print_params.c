#include "../../include/libft.h"

void ft_print_params(int argc, char *argv[])
{
    int i = 1;
    while(i < argc)
    {
        ft_putstr(argv[i++]);
        ft_putstr(" ");
    }
}