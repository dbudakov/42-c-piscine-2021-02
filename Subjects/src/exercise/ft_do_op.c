#include "../../include/libft.h"

static int ft_get_op(char op)
{
    if ('*' == op)
        return 42;
    return 0;
}

static int op_add(int a, int b)
{
    return a + b;
}

static int op_sub(int a, int b)
{
    return a - b;
}

static int op_div(int a, int b)
{
    return a / b;
}

static int op_mul(int a, int b)
{
    return a * b;
}

static int op_mod(int a, int b)
{
    return a % b;
}

int ft_do_op(int argc, char *argv[])
{
    int i = 0;
    int (*tab[60])(int, int);

    tab[43] = op_add;
    tab[45] = op_sub;
    tab[47] = op_div;
    tab[42] = op_mul;
    tab[37] = op_mod;

    if (argc != 4)
        return 1;
    if ((ft_strstr("+-/*%", argv[2]) == 0) || (ft_strlen(argv[2]) > 1))
    {
        ft_putnbr(0);
        return 1;
    }
    if(0 == ft_strcmp("/", argv[2]))
    {
        if (0 == ft_atoi(argv[3]))
        {
            ft_putstr("Stop : division by zero");
            return 1;
        }
    }
    if(0 == ft_strcmp("%", argv[2]))    
    {
        if (0 == ft_atoi(argv[3]))
        {
            ft_putstr("Stop : modulo by zero");
            return 1;
        }
    }
    ft_putnbr(tab[argv[2][0]](ft_atoi(argv[1]), ft_atoi(argv[3])));
    return argc;
}