#ifndef _C10_
#define _C10_

// exercise
int display_file(int argc, char *argv[]);
int ft_cat(int argc, char *argv[]);
int ft_tail(int argc, char *argv[]);
int ft_hexdump(int argc, char *argv[]);

// test
void display_file_check(int argc, char *argv[]);
void ft_cat_check(int argc, char *argv[]);
void ft_tail_check(int argc, char *argv[]);
void ft_hexdump_check(int argc, char *argv[]);

// utilites
void ft_readfile_err(char *file, int err);

#endif
