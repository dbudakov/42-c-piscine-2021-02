#include "../../include/libft.h"

void btree_level_count_check(void)
{
    int output = 0;
    int result = 0;
    t_btree *root = NULL;

    btree_insert_data(&root, "000", &ft_strcmp);
    btree_insert_data(&root, "001", &ft_strcmp);
    btree_insert_data(&root, "002", &ft_strcmp);
    btree_insert_data(&root, "003", &ft_strcmp);
    btree_insert_data(&root, "004", &ft_strcmp);
    btree_insert_data(&root, "005", &ft_strcmp);
    btree_insert_data(&root, "006", &ft_strcmp);
    btree_insert_data(&root, "007", &ft_strcmp);
    btree_insert_data(&root, "008", &ft_strcmp);
    btree_insert_data(&root, "009", &ft_strcmp);
   
    ft_putstr("btree_level_count: ");
    if (9 == btree_level_count(root))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}