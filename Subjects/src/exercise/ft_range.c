#include "../../include/libft.h"

int *ft_range(int min, int max)
{
    int i;
    int size = 0;
    int num = 0;
    int *range = NULL;
    
    if (min > max)
        return NULL;
    num = min;
    while(num++ < max)
        size++;
    range = (int *)malloc(sizeof(int) * (size));
    i = 0;
    num = min;
    while(num < max)
        range[i++] = num++;
    return range;
}