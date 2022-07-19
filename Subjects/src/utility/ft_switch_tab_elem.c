#include "../../include/libft.h"

void ft_switch_tab_elem(char **tab, int src, int dest)
{
    char *buff = NULL;

    buff = tab[dest];
    tab[dest] = tab[src]; 
    tab[src] = buff;
}