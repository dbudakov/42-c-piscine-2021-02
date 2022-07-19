#include "../../include/libft.h"

void ft_cat_check(int argc, char *argv[])
{
    int output = 0;

    ft_putstr("ft_cat: ");
    if (1 == output)
    {
        ft_putstr("\n");
        ft_cat(argc, argv);
    }
    else
        printf("%s\n", GREY("oversize output"));
}