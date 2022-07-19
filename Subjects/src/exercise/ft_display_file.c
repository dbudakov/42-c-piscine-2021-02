#include "../../include/libft.h"

int display_file(int argc, char *argv[])
{
    int fd = -1;
    char buff = 0;
    int rc = 1;

    // buff = (char *)malloc(100);
    if (argc < 2)
    {    
        ft_putstr("File name missing.\n");
        return 1;
    }
    else if (argc > 2)
    {
        ft_putstr("Too many arguments.\n");
        return 1;
    }
    else
    {

        fd = open(argv[1], O_RDONLY);
        while(0 != rc)
        {
            ft_putchar(buff);
            rc = read(fd, &buff, 1);
        }
    }
    close(fd);
    return 0;
}