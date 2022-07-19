#include "../../include/libft.h"

void ft_hexdump_check(int argc, char *argv[])
{
    int output = 0;
    ft_putstr("ft_hexdump: ");
    if (1 == output)
    {
        ft_putstr("\n");
        ft_hexdump(argc, argv);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("oversize output"));
}
