#include "../../include/libft.h"

static int ft_sort_params_check_double(char *a[], int argc, char *str)
{
    int i = 0;
    while (i < argc)
    {
        if (ft_strcmp(a[i], str) == 0)
            return 1;
        i++;
    }
    return 0;
}

static void ft_sort_params_init_array(char *a[], int argc)
{
    int i = 0;
    while (i < argc)
        a[i++] = "";
}

void ft_sort_params(int argc, char *argv[])
{
    int i = 0;
    int num = 0;
    int size = 0;
    char *max= "";
    char *mask[argc];
    
    ft_sort_params_init_array(mask, argc);
    size = argc;
    while(num < size)
    {
        i = 1;
        max = "";
        while(i < argc)
        {
            if (ft_strcmp(argv[i], max) > 0)
                if (0 == ft_sort_params_check_double(mask, argc, argv[i]))
                    max = argv[i];
            i++;
        }
        ft_putstr(max);
        ft_putstr(" ");
        mask[num] = max;
        num++;
    }
}