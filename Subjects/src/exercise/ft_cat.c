#include "../../include/libft.h"

int ft_cat(int argc, char *argv[])
{
    int file = 1;
    int fd = 0;
    int rc = 1;
    char buff = 0;

    if (argc < 2)
    {
        fd = 0;
        while(0 < rc)
        {
            ft_putchar(buff);
            rc = read(fd, &buff, 1);
        }
    }
    while(file < argc)
    {   
        fd = open(argv[file], O_RDONLY);
        if (-1 == fd)
        {
            ft_puterror((char *)__func__);
            ft_puterror(": ");
            ft_puterror(argv[file]);
            ft_puterror(": ");
            ft_puterror(strerror(13));
            ft_puterror("\n");
            return 1;
        }
        while(0 < rc)
        {
            ft_putchar(buff);
            rc = read(fd, &buff, 1);
        }
        rc = 1;
        close(fd);
        file++;
    }
    return 0;
}