#include "../../include/libft.h"

void display_file_check(int argc, char *argv[])
{
    ft_putstr("display_file: ");
    int output = 0;
    if (1 == output)
    {    
        ft_putstr("\n");
        display_file(argc, argv);
    }
    else
        printf("%s\n", GREY("oversize output"));
}