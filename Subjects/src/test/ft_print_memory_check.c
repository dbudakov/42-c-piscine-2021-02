#include "../../include/libft.h"

void ft_print_memory_check(void)
{
    int output;

    output = 1;
    ft_putstr("ft_print_memory: ");
    if (1 == output)
    {
        ft_putchar('\n');
        ft_print_memory("Bonjour les aminches\n\n\nc est fou\ntout\nce qu on\0\0", 60);
    }
    else 
        printf("%s\n", GREY("oversize output"));
    ft_putstr("\n");
}