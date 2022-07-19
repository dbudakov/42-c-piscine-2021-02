#include "../../include/libft.h"

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int i = 0;
    int decimal = 0;
    char *str_decimal = NULL;
    char *to_nbr = NULL;
    int num_base_from = 0;
    int nbr_len = 0;


    num_base_from = ft_get_base(base_from);
    nbr_len = ft_strlen(nbr);

    while(nbr[i] != '\0')
    {
        decimal += (int)(nbr[(nbr_len - 1) - i] - 48) * ft_iterative_power(num_base_from, i);
        i++;
    }


    to_nbr = ft_itoa(decimal);
    return ft_itoa((ft_atoi_base(to_nbr, base_to)));
}