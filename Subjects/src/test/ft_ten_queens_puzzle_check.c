#include "../../include/libft.h"

void ft_ten_queens_puzzle_check(void)
{
    int output = 0;
    int rc = 0;
    int old_stdout = 0;
    ft_putstr("ft_ten_queens_puzzle: ");

    if (1 == output)
    {   
        rc = ft_ten_queens_puzzle();
        printf("%d\n", rc);
    }
    else
        printf("%s\n",GREY("oversize output"));   
}