#ifndef _C07_
#define _C07_

// exercise
char *ft_strdup(char *src);
int *ft_range(int min, int max);
int ft_ultimate_range(int **range, int min, int max);
char *ft_strjoin(int size, char **strs, char *sep);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
char **ft_split(char *str, char *charset);

// test
void ft_strdup_check(void);
void ft_range_check(void);
void ft_ultimate_range_check(void);
void ft_strjoin_check(void);
void ft_convert_base_check(void);
void ft_split_check(void);

// utilites
char *ft_itoa(int nbr);
int ft_charstr(char *str, char c);

#endif
