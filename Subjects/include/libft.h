#ifndef _LIBFT_H_
#define _LIBFT_H_

#include "./c02.h"
#include "./c03.h"
#include "./c04.h"
#include "./c05.h"
#include "./c06.h"
#include "./c07.h"
#include "./c08.h"
#include "./c10.h"
#include "./c11.h"
#include "./c12.h"
#include "./c13.h"

// libc
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>


// output
#define OVER "oversized output"
// color output
#define GREEN(EXP) "\033[2;32m"EXP"\033[0m"
#define RED(EXP) "\033[2;31m"EXP"\033[0m"
#define GREY(EXP) "\033[2;30m"EXP"\033[0m"

// return code
#define UNKNOWN 8
#define TRUE 1
#define FALSE 0 
#define SUCCESS 1

// libft
void ft_putchar(char c);
void ft_putnbr(int c);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb();
void ft_print_comb2();
void ft_print_combn(int n);
void ft_puterror(char *str);

// c01, test
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *s);
unsigned int ft_strlen(char *s);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

// c01, other
int ft_min_int_tab(int *tab, int num);
int ft_max_int_tab(int *tab, int num);

// c01, test
void ft_ft_check();
void ft_ultimate_ft_check();
void ft_swap_check();
void ft_div_mod_check();
void ft_ultimate_div_mod_check();
void ft_putstr_check();
void ft_strlen_check();
void ft_rev_int_tab_check();
void ft_sort_int_tab_check();


// test
void ft_putchar_check();
void ft_putnbr_check();
void ft_print_reverse_alphabet_check();
void ft_print_numbers_check(void);
void ft_is_negative_check(void);
void ft_print_comb_check();
void ft_print_comb2_check();
void ft_print_combn_check(void);


// utility
void ft_result_output(int result);

#endif
