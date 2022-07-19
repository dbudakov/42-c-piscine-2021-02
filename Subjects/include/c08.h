#ifndef _C08_
#define _C08_

#include "./ft_boolean.h"
#include "./ft_point.h"
#include "./ft_stock_str.h"

// exercise
int ft_boolean(int argc, char **argv);
int ft_point(void);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

// test
void ft_boolean_check(int argc, char **argv);
void ft_point_check(void);
void ft_strs_to_tab_check(void);
void ft_show_tab_check(void);

#endif
