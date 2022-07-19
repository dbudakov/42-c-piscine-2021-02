#include "../../include/libft.h"

void ft_sort_string_tab(char **tab)
{
    int length = 0;
    char *buff = NULL;
    int num_max = 0;
    int success = 1;
    size_t i = 0;

    while(tab[length] != NULL)
        length++;
    while(0 != length)
    {   
        while(i < length)
        {
            if (0 > ft_strcmp(tab[num_max], tab[i]))
                num_max = i;
            i++;
        }
        if (num_max != length - 1)
            ft_switch_tab_elem(tab, num_max, length - 1);
        num_max = 0;
        i = 0;        
        length--;
    }
}