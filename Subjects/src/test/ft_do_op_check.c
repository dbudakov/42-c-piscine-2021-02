#include "../../include/libft.h"

void ft_do_op_check(int argc, char *argv[])
{
    int output = 0;
    ft_putstr("do-op: ");
    if (1 == output)
        ft_do_op(argc, argv);
    else
        printf("%s\n", GREY("oversize output"));
}