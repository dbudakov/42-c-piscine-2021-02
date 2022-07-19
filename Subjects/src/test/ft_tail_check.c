#include "../../include/libft.h"

void ft_tail_check(int argc,char *argv[])
{
    int output = 0;
    
    ft_putstr("ft_tail: ");
    if (1 == output)
    {
        if (4 < argc)
            ft_putstr("\n");
        ft_tail(argc, argv);
    }
    else
        printf("%s\n", GREY("oversize output"));
}