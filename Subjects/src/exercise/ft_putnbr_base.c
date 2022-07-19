#include "../../include/libft.h"

void ft_putnbr_base_two(int nbr)
{
    if (nbr / 2 != 0)
        ft_putnbr_base_two(nbr / 2);
    ft_putnbr(nbr % 2);
}

void ft_putnbr_base_octo(int nbr)
{
    if (nbr / 8 != 0)
        ft_putnbr_base_octo(nbr / 8);
    ft_putnbr(nbr % 8);
}

static void ft_putnbr_base_hex(unsigned long nbr)
{
    if (nbr / 16 != 0)
        ft_putnbr_base_hex(nbr / 16);
    if ((nbr % 16) > 9)
        ft_putchar((nbr % 16) + 87);
    else
        ft_putnbr(nbr % 16);
}

void ft_putnbr_base(unsigned long nbr, char *base)
{
    int ibase = ft_get_base(base);
    if (ibase == 10)
        ft_putnbr(nbr);
    if (ibase == 2)
        ft_putnbr_base_two(nbr);
    if (ibase == 8)
        ft_putnbr_base_octo(nbr);
    if (ibase == 16)
        ft_putnbr_base_hex(nbr);
}
