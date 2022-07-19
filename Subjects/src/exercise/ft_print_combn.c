#include "../../include/libft.h"

void ft_print_combn_status(void)
{
    printf("%s", GREEN("in progress"));
}

void ft_print_comb_one(void)
{
    int n = 0;
    while(n != 9 + 1)
    {
        ft_putnbr(n);
        if (n == 9)
            return;
        ft_putstr(", ");
        n++;
    }
}

void ft_print_comb_two(void)
{
    int a, b;
    a = 0;
    while(a != (7 + 1))
    {
        b = a + 1;
        while(b != (9 + 1))
        {
            ft_putnbr(a);
            ft_putnbr(b);
            if ((a == 7) && (b == 9))
                return;
            ft_putstr(", ");
            b++;
        }
        a++;
    }

}

void ft_print_comb_four(void)
{
    int a,b,c,d;
    a = 0;
    while(a != (9 + 1))
    {
        b = a + 1;
        while (b != 9 + 1)
        {
            c = b + 1;
            while( c != (9 + 1))
            {
                d = c + 1;
                while (d != (9 + 1))
                {
                    ft_putnbr(a);
                    ft_putnbr(b);
                    ft_putnbr(c);
                    ft_putnbr(d);
                    if (a == 6)
                        return;
                    ft_putstr(", ");
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb_five(void)
{
    int a,b,c,d,e;
    a = 0;
    while(a != (9 + 1))
    {
        b = a + 1;
        while (b != 9 + 1)
        {
            c = b + 1;
            while( c != (9 + 1))
            {
                d = c + 1;
                while (d != (9 + 1))
                {
                    e = d + 1;
                    while(e != (9 + 1))
                    {
                        ft_putnbr(a);
                        ft_putnbr(b);
                        ft_putnbr(c);
                        ft_putnbr(d);
                        ft_putnbr(e);
                        if (a == 5)
                            return;
                        ft_putstr(", "); 
                        e++;                       
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb_six(void)
{
    int a,b,c,d,e,f;
    a = 0;
    while(a != (9 + 1))
    {
        b = a + 1;
        while (b != 9 + 1)
        {
            c = b + 1;
            while( c != (9 + 1))
            {
                d = c + 1;
                while (d != (9 + 1))
                {
                    e = d + 1;
                    while(e != (9 + 1))
                    {
                        f = e + 1;
                        while (f != (9 + 1))
                        {
                            ft_putnbr(a);
                            ft_putnbr(b);
                            ft_putnbr(c);
                            ft_putnbr(d);
                            ft_putnbr(e);
                            ft_putnbr(f);                            
                            if (a == 4)
                                return;
                            ft_putstr(", ");                             
                            f++;
                        }
                        e++;                       
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb_seven(void)
{
    int a,b,c,d,e,f,g;
    a = 0;
    while(a != (9 + 1))
    {
        b = a + 1;
        while (b != 9 + 1)
        {
            c = b + 1;
            while( c != (9 + 1))
            {
                d = c + 1;
                while (d != (9 + 1))
                {
                    e = d + 1;
                    while(e != (9 + 1))
                    {
                        f = e + 1;
                        while (f != (9 + 1))
                        {
                            g = f + 1;
                            while (g != (9 + 1))
                            {
                                ft_putnbr(a);
                                ft_putnbr(b);
                                ft_putnbr(c);
                                ft_putnbr(d);
                                ft_putnbr(e);
                                ft_putnbr(f);
                                ft_putnbr(g);                                
                                if (a == 3)
                                    return;
                                ft_putstr(", ");
                                g++;
                            }
                            f++;
                        }
                        e++;                       
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb_eight(void)
{
    int a,b,c,d,e,f,g,h;
    a = 0;
    while(a != (9 + 1))
    {
        b = a + 1;
        while (b != 9 + 1)
        {
            c = b + 1;
            while( c != (9 + 1))
            {
                d = c + 1;
                while (d != (9 + 1))
                {
                    e = d + 1;
                    while(e != (9 + 1))
                    {
                        f = e + 1;
                        while (f != (9 + 1))
                        {
                            g = f + 1;
                            while (g != (9 + 1))
                            {
                                h = g + 1;
                                while (h != (9 + 1))
                                {
                                    ft_putnbr(a);
                                    ft_putnbr(b);
                                    ft_putnbr(c);
                                    ft_putnbr(d);
                                    ft_putnbr(e);
                                    ft_putnbr(f);
                                    ft_putnbr(g);
                                    ft_putnbr(h);                                    
                                    if (a == 2)
                                        return;
                                    ft_putstr(", ");
                                    h++;
                                }
                                g++;
                            }
                            f++;
                        }
                        e++;                       
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb_nine(void)
{
    int a,b,c,d,e,f,g,h,i;
    a = 0;
    while(a != (9 + 1))
    {
        b = a + 1;
        while (b != 9 + 1)
        {
            c = b + 1;
            while( c != (9 + 1))
            {
                d = c + 1;
                while (d != (9 + 1))
                {
                    e = d + 1;
                    while(e != (9 + 1))
                    {
                        f = e + 1;
                        while (f != (9 + 1))
                        {
                            g = f + 1;
                            while (g != (9 + 1))
                            {
                                h = g + 1;
                                while (h != (9 + 1))
                                {
                                    i = h + 1;
                                    while (i != (9 + 1))
                                    {
                                        ft_putnbr(a);
                                        ft_putnbr(b);
                                        ft_putnbr(c);
                                        ft_putnbr(d);
                                        ft_putnbr(e);
                                        ft_putnbr(f);
                                        ft_putnbr(g);
                                        ft_putnbr(h);
                                        ft_putnbr(i);                                        
                                        if (a == 1)
                                            return;
                                        ft_putstr(", ");                                        
                                        i++;
                                    }
                                    h++;
                                }
                                g++;
                            }
                            f++;
                        }
                        e++;                       
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_combn(int n)
{
    if (n == 1){ft_print_comb_one();}
    if (n == 2){ft_print_comb_two();}
    if (n == 3){ft_print_comb();}
    if (n == 4){ft_print_comb_four();}
    if (n == 5){ft_print_comb_five();}
    if (n == 6){ft_print_comb_six();}
    if (n == 7){ft_print_comb_seven();}
    if (n == 8){ft_print_comb_eight();}
    if (n == 9){ft_print_comb_nine();}
}

