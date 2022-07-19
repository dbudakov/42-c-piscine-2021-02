#include "../../include/libft.h"
#define BUFF_SIZE 1000

static void ft_put_zero(long addr)
{
    if ((long)addr < 9)
        ft_putstr("0000000");
    else if ((long)addr < 16)
        ft_putstr("0000000");
    else if ((long)addr < 4096)
        ft_putstr("000000");
    else if ((long)addr < 65536)
        ft_putstr("00000");
    else if ((long)addr < 1048576)
        ft_putstr("0000");
    else if ((long)addr < 16777216)
        ft_putstr("000");
    else if ((long)addr < 268435456)
        ft_putstr("00");
    else if ((long)addr < 268435456)
        ft_putstr("0");
}

void ft_hexdump_main(int fd)
{
    int end = 0;
    int flag = 0;
    int last = 0;
    int i = 0;
    int line = 0;
    int rc = 1;
    char *prev = NULL;
    char buff[16 + 1] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char temp[16 + 1] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    prev = (char *)malloc(sizeof(char) * (16+1));
    while (0 != rc)
    {
        while (0 != rc && 16 > ft_strlen(buff))
        {
            rc = read(fd, &temp, 16);
            temp[rc] = '\0';
            ft_strcat(buff, temp);
        }
        if (0 == ft_strcmp(prev, buff))
        {
            if (0 == flag)
                ft_putstr("*\n");
            flag = 1;
        }
        else
        {
            flag = 0;
            ft_put_zero((line * 16) - (16 - last));
            ft_putnbr_base(line * 16, "0123456789ABCDEF");
            if (0 < ft_strlen(buff))
            {
                i = 0;
                ft_putstr("  ");
                last = 0;
                while(i  < 16)
                {
                    if ((9 < buff[i])  && (buff[i] < 16))
                            ft_putchar('0');
                    if (0 == buff[i])
                        ft_putstr("  ");
                    else            
                    {
                        ft_putnbr_base(buff[i], "0123456789ABCDEF");
                        last++;
                    }
                    ft_putchar(' ');
                    if (7 == i)
                        ft_putchar(' ');
                    i++;
                }
                // ft_putchar(' ');
                ft_putstr(" |");
                i = 0;
                while(buff[i] != '\0')
                {
                    if ('\n' == buff[i])
                        ft_putchar('.');    
                    else
                        ft_putchar(buff[i]);
                    i++;
                }
                ft_putstr("|\n");
            }
            ft_strcpy(prev, buff);
        }
        line++;
        if (ft_strlen(buff) < 16 && 0 != rc)
        {
            ft_put_zero((line * 16) - (16 - last));
            ft_putnbr_base(((line * 16) - (16 - last)), "0123456789ABCDEF");
        }
        i = 0;
        while(i < 16)
            buff[i++] = '\0';
    }
}

int ft_hexdump_output(int argc, char *argv[])
{
    int fd = -1;
    int j = 2;
    int last = 0;
    int i = 0;
    int line = 0;
    int rc = 1;
    char buff[16 + 1] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char temp[16 + 1] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    fd = open(argv[j], O_RDONLY);
    if (-1 == fd)
    {
        ft_readfile_err(argv[j], 13);
        return 1;
    }
    j++;
    while (0 != rc)
    {
        rc = read(fd, &buff, 16);
        buff[rc] = '\0';

        if ((rc < 16) && (j < argc))
        {
            close(fd);
            fd = open(argv[j], O_RDONLY);
            if (-1 == fd)
            {
                ft_readfile_err(argv[j], 13);
                return 1;
            }
            j++;
            rc = read(fd, &temp, 16 - ft_strlen(buff));
            temp[rc] = '\0';
            strcat(buff, temp);
        }

        ft_put_zero(line * 16);
        if (rc == 16)
            ft_putnbr_base(line * 16, "0123456789ABCDEF");
        else
            ft_putnbr_base(((line * 16) - (16 - last)), "0123456789ABCDEF");

        if (0 < rc)
        {
            i = 0;
            ft_putchar(' ');
            ft_putchar(' ');
            last = 0;
            while(i  < 16)
            {

                if ((9 < buff[i])  && (buff[i] < 16))
                    ft_putchar('0');
                if (0 == buff[i])
                    ft_putstr("  ");
                else            
                {
                    ft_putnbr_base(buff[i], "0123456789ABCDEF");
                    last++;
                }
                ft_putchar(' ');
                if (7 == i)
                    ft_putchar(' ');
                i++;
            }
            // ft_putchar(' ');
            ft_putchar(' ');
            ft_putchar('|');
            i = 0;
            while(buff[i] != '\0')
            {
                if ('\n' == buff[i])
                    ft_putchar('.');    
                else
                    ft_putchar(buff[i]);
                i++;
            }
            ft_putchar('|');
            ft_putstr("\n");

        }
        i = 0;
        while(i < 16)
            buff[i++] = '\0';
        line++;
    }
    close(fd);
    return 0;
}

int ft_hexdump(int argc, char *argv[])
{
    int i = 0;
    int fd = 0;
    char *src = NULL;
    char *dest = NULL;
    char *buff = NULL;

    if ((2 > argc)  || (0 != ft_strcmp("-C",argv[1])))
    {
        ft_puterror((char *)__func__);
        ft_puterror(": ");
        ft_puterror("Only \'-C\' mode");
        ft_puterror("\n");
        return 1;
    }
    if (2 == argc)
        ft_hexdump_main(0);
    if (2 < argc)
    {
        // i = 2;
        ft_hexdump_output(argc, argv);
        // while(i < argc)
        // {
        //     fd = open(argv[i], O_RDONLY);
        //     if (-1 == fd)
        //     {
        //         ft_readfile_err(argv[i], 13);
        //         return 1;
        //     }
            // ft_hexdump_output(argc, argv);
            // src = ft_hexdump_str(argv[i]);
            // buff = strcat(dest, src);
            // if (NULL != src)
                // free(src);
            // if (NULL != dest)
                // free(dest);
            // close(fd);
            // dest = buff;
            // i++;
        // }
        // ft_hexdump_main(dest);
        // if (NULL != dest)
        //     free(dest);
    }
    return 0;
}