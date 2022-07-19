#include "../../include/libft.h"



static void ft_put_zero(long addr)
{
        if ((unsigned long)addr < 16)
        ft_putstr("00000000000000");
    else if ((long)addr < 256)
        ft_putstr("0000000000000");
    else if ((long)addr < 4096)
        ft_putstr("000000000000");
    else if ((long)addr < 65536)
        ft_putstr("00000000000");
    else if ((long)addr < 1048576)
        ft_putstr("0000000000");
    else if ((long)addr < 16777216)
        ft_putstr("000000000");
    else if ((long)addr < 268435456)
        ft_putstr("00000000");
    else if ((long)addr < 4294967296)
        ft_putstr("0000000");
    else if ((long)addr < 68719476736)
        ft_putstr("000000");
    else if ((long)addr < 1099511627776)
        ft_putstr("00000");
    else if ((long)addr < 17592186044416)
        ft_putstr("0000");                   
    else if ((long)addr < 105553131995920)
        ft_putstr("000");      
    else if ((long)addr < 281474976710656)
        ft_putstr("00");      
    else if ((long)addr < 4503599627370496)
        ft_putstr("0");
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int i = 0, j = 1, k = 0, line = 0;
    char *str = 0;

    if (0 == size)
        return 0;
    str = addr;
    line = (size/16) + 1;
    while (j < line + 1)
    {
        ft_put_zero((long)&addr[i]);
        ft_putnbr_base((unsigned long)&addr[i], "0123456789ABCDEF");
        ft_putstr(": ");
        k = i;
        while(i < (16 * j) && i < size)
        {
            if (i % 2 == 0)
                ft_putchar(' ');
            if (str[i] == '\0')
                ft_putstr("00");
            else
            {
                if (str[i] < (16 + 1))
                    ft_putchar('0');
                ft_putnbr_base((int)(str[i]), "0123456789ABCDEF");
            }
            i++;
        }
        ft_putstr("  ");
        while(k < (16 * j) && k < size)
        {
            if (ft_non_printable(str[k]))
                ft_putchar('.');
            else
                ft_putchar(str[k]);
            k++;
        }
        ft_putchar('\n');
        j++;
    }
    ft_putstr("\n");
    return addr;
}