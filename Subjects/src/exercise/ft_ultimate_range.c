#include "../../include/libft.h"

int ft_ultimate_range(int **arr, int min, int max)
{
    int i = 0;
    int num = 0;
    int size = 0;

    if (min > max)
        return 0;
    num = min;
    while (num++ < max)
        size++;
    *arr = (int *)malloc(sizeof(int) * size);
    num = min;
    while(num <  max)
        arr[0][i++] = num++;

    return size;
}