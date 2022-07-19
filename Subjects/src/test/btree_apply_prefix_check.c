#include "../../include/libft.h"

void btree_apply_prefix_check(void)
{
    int output = 0;
    t_btree *root = NULL;
    
    btree_insert_data(&root, "9", &ft_strcmp);
    btree_insert_data(&root, "5", &ft_strcmp);
    btree_insert_data(&root, "8", &ft_strcmp);
    btree_insert_data(&root, "4", &ft_strcmp);
    btree_insert_data(&root, "3", &ft_strcmp);
    btree_insert_data(&root, "7", &ft_strcmp);
    btree_insert_data(&root, "1", &ft_strcmp);
    btree_insert_data(&root, "6", &ft_strcmp);
    btree_insert_data(&root, "2", &ft_strcmp);
    btree_insert_data(&root, "0", &ft_strcmp);

    ft_putstr("btree_apply_prefix: ");
    if (1 == output)
    {
        btree_apply_prefix(root, &ft_putstr);
        ft_putstr("\n");
    }
    else 
        printf("%s\n", GREY("oversize output"));        
}