#include "../../include/libft.h"

void btree_apply_infix(t_btree *root, void (*applyf)())
{
    if (NULL != root)
    {
        btree_apply_infix(root->left, applyf);
        applyf(root->item);
        btree_apply_infix(root->right, applyf);
    }
}