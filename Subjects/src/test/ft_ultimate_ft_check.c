#include "../../include/libft.h"

void ft_ultimate_ft_check()
{
    int *a,**b,***c,****d,*****e,******f,*******g,********h;
    int nbr = 5;
    a = &nbr;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    ft_ultimate_ft(&h);
    ft_putstr("ft_ultimate_ft: ");
    ft_putnbr(nbr);
    ft_putchar('\n');
}