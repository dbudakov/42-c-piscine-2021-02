#ifndef _C_13_
#define _C_13_

#include "./ft_btree.h"

// exercise
t_btree *btree_create_node(void *item);
void btree_insert_data(t_btree **root, void *item, int (*cmpf)());
void btree_apply_prefix(t_btree *root, void (*applyf)());
void btree_apply_infix(t_btree *root, void (*applyf)());
void btree_apply_suffix(t_btree *root, void (*applyf)());
t_btree *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)());
int btree_level_count(t_btree *root);
void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem));

// check
void btree_create_node_check(void);
void btree_insert_data_check(void);
void btree_apply_prefix_check(void);
void btree_apply_infix_check(void);
void btree_apply_suffix_check(void);
void btree_search_item_check(void);
void btree_level_count_check(void);
void btree_apply_by_level_check(void);

// utilites

#endif
