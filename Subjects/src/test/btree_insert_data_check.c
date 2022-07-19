#include "../../include/libft.h"

void btree_infix_out(t_btree *root)
{
    if (root != NULL)
    {
        btree_infix_out(root->left);
        ft_putstr(root->item);
        ft_putstr(", ");
        btree_infix_out(root->right);
    }
}

void btree_insert_data_check(void)
{
    int output = 0;
    t_btree *root = NULL;
    
    btree_insert_data(&root, "09", &ft_strcmp);
    btree_insert_data(&root, "05", &ft_strcmp);
    btree_insert_data(&root, "08", &ft_strcmp);
    btree_insert_data(&root, "04", &ft_strcmp);
    btree_insert_data(&root, "03", &ft_strcmp);
    btree_insert_data(&root, "07", &ft_strcmp);
    btree_insert_data(&root, "01", &ft_strcmp);
    btree_insert_data(&root, "06", &ft_strcmp);
    btree_insert_data(&root, "02", &ft_strcmp);
    btree_insert_data(&root, "00", &ft_strcmp);
    
    ft_putstr("btree_insert_data: ");
    if (1 == output)
    {
        btree_infix_out(root);
        ft_putstr("\n");
    }
    else 
        printf("%s\n", GREY("oversize output"));
}