#ifndef _C12_
#define _C12_

#include "./ft_list.h"

// exercise
t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_list_push_strs(int size, char **strs);
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void ft_list_reverse(t_list **begin_list);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
void ft_list_merge(t_list **begin_list1, t_list **begin_list2);
void ft_list_sort(t_list **begin_list, int (cmp)());
void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

// test
void ft_create_elem_check(void);
void ft_list_push_front_check(void);
void ft_list_size_check(void);
void ft_list_last_check(void);
void ft_list_push_back_check(void);
void ft_list_push_strs_check(void);
void ft_list_clear_check(void);
void ft_list_at_check(void);
void ft_list_reverse_check(void);
void ft_list_foreach_check(void);
void ft_list_foreach_if_check(void);
void ft_list_find_check(void);
void ft_list_remove_if_check(void);
void ft_list_merge_check(void);
void ft_list_sort_check(void);
void ft_sorted_list_insert_check(void);
void ft_sorted_list_merge_check(void);

// utilites
void ft_swap_elem(t_list **list, t_list *src, t_list *dest);


#endif
