#ifndef _C02_
#define _C02_

// exercise
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

// test
void ft_strcpy_check();
void ft_strncpy_check();
void ft_str_is_alpha_check();
void ft_str_is_numeric_check();
void ft_str_is_lowercase_check();
void ft_str_is_uppercase_check();
void ft_str_is_printable_check();
void ft_strupcase_check(void);
void ft_strlowcase_check(void);
void ft_strcapitalize_check(void);
void ft_strlcpy_check(void);
void ft_putstr_non_printable_check(void);
void ft_print_memory_check(void);

// utilites
char ft_to_upper(char c);
char ft_to_lower(char c);
int ft_is_alpha(char c);
int ft_is_lower(char c);
int ft_is_upper(char c);
int ft_is_space(char c);
int ft_is_digit(char c);
int ft_is_symbol(char c);
int ft_non_printable(char c);


#endif
