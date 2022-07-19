#include "../../include/libft.h"

void btree_search_item_check(void)
{
    int output = 0;
    t_btree *root = NULL;
    t_btree *search = NULL;
    
    btree_insert_data(&root, "9", &ft_strcmp);
    btree_insert_data(&root, "5", &ft_strcmp);
    btree_insert_data(&root, "1", &ft_strcmp);
    btree_insert_data(&root, "4", &ft_strcmp);
    btree_insert_data(&root, "3", &ft_strcmp);
    btree_insert_data(&root, "7", &ft_strcmp);
    btree_insert_data(&root, "1", &ft_strcmp);
    btree_insert_data(&root, "6", &ft_strcmp);
    btree_insert_data(&root, "2", &ft_strcmp);
    btree_insert_data(&root, "0", &ft_strcmp);
    
    search = btree_search_item(root, "1", &ft_strcmp);
    ft_putstr("btree_apply_suffix: ");
    if (0 == ft_strcmp("1", search->item))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}