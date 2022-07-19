#ifndef _C11_
#define _C11_

// exercise
void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));
int ft_any(char **tab, int(*f)(char*));
int ft_count_if(char **tab, int length, int(*f)(char*));
int ft_is_sort(int *tab, int length, int(*f)(int, int));
int ft_do_op(int argc, char *argv[]);
void ft_sort_string_tab(char **tab);
void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

// test
void ft_foreach_check(void);
void ft_map_check(void);
void ft_any_check(void);
void ft_count_if_check(void);
void ft_is_sort_check(void);
void ft_do_op_check(int argc, char *argv[]);
void ft_sort_string_tab_check(void);
void ft_advanced_sort_string_tab_check(void);

// utilites
int ft_granted_them(int granted, int lower);
void ft_put_tab_string(char **tab);
void ft_switch_tab_elem(char **tab, int src, int dest);

#endif
