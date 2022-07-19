#include "../../include/libft.h"

void ft_result_output(int result)
{
    if (result == UNKNOWN)
        printf("%s\n", GREY("unknown"));
    else if (result == FALSE)
        printf("%s\n", RED("false"));
    else
        printf("%s\n", GREEN("success"));  
}
