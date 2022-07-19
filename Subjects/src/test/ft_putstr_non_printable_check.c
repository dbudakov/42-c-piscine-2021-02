#include "../../include/libft.h"

void ft_putstr_non_printable_check(void)
{
    int result = 0;
    ft_putstr("ft_putstr_non_printable: ");
    ft_putstr_non_printable("hello\nhello");
    ft_putstr("\n");
}