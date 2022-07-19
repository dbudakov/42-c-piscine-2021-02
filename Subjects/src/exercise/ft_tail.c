#include "../../include/libft.h"
#define BUFFER_SIZE 100

/* buffer size == BUFFER_SIZE bytes */
static void ft_tail_stdin(int fd, int len)
{
    int num = 0; 
    int rc = 1;
    int i = 0;
    char *arr = NULL;
    char *buff = NULL;

    buff = (char *)malloc(BUFFER_SIZE + 1);
    arr = (char *)malloc(BUFFER_SIZE + 1);
    while(0 < rc)
    {
        rc = read(fd, buff, BUFFER_SIZE);
        buff[rc] = '\0';
        if ((ft_strlen(buff) + ft_strlen(arr)) < BUFFER_SIZE + 1)
            arr = ft_strcat(arr, buff);
        else
        {
            arr[0] = '\0';
            ft_strcat(arr, &arr[ft_strlen(buff)]);
            arr = ft_strcat(arr, buff);
        }

    }
    num = (ft_strlen(arr) - len);
    if (num < 0)
        num = 0;
    ft_putstr(&arr[num]);
    free(arr);
    free(buff);
}

int ft_tail(int argc, char *argv[])
{
    int i = 0;
    int rc = 1;
    int fd = -1;
    int len = 0;
    int cflag = 0;
    char buff = 0;
    char *arr = NULL;


    if (0 != ft_strcmp("-c",argv[1]))
    {
        ft_puterror("Only -c mode\n");
        return 1;
    }
    len = (ft_atoi(argv[2]));
    if (len < 0)
        len = -len;
    if (3 == argc)
        ft_tail_stdin(0, len);
    if (3 < argc)
    {
        i = 3;
        while(i < argc)
        {
            if (4 < argc)
            {
                ft_putstr("==> ");
                ft_putstr(argv[i]);
                ft_putstr(" <==\n");
            }
            fd = open(argv[i], O_RDONLY);
            if (-1 == fd)
            {
                ft_puterror((char *)__func__);
                ft_puterror(": ");
                ft_puterror(argv[i]);
                ft_puterror(": ");
                ft_puterror(strerror(13));
                ft_puterror("\n");
                return 1;
            }
            ft_tail_stdin(fd, len);
            close(fd);
            if (i < (argc - 1))
                ft_putstr("\n");
            i++;
        }
    }
    return 0;
}