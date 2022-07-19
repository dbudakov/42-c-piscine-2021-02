#ifndef _C03_
#define _C03_

// utilites
int ft_eq_char(char a, char b);
int ft_div_char(char a, char b);

// exercise
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

// test
void ft_strcmp_check();
void ft_strncmp_check();
void ft_strcat_check();
void ft_strncat_check();
void ft_strstr_check();
void ft_strlcat_check();


#endif
