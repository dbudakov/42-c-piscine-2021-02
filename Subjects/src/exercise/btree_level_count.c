#include "../../include/libft.h"

typedef struct          s_queue 
{
    struct s_queue      *next;
    t_btree             *node;
    int                 level;

}                       t_queue;

t_queue *ft_create_queue(t_btree *node, int level)
{
    t_queue *queue = (t_queue *)malloc(sizeof(t_queue));
    queue->node = node;
    queue->level = level;
    return queue;
}

void ft_push_queue(t_queue **queue, t_btree *node, int level)
{
    t_queue *tmp_queue = (t_queue *)malloc(sizeof(t_queue));
    
    tmp_queue->node = node;
    tmp_queue->level = level;
    tmp_queue->next = *queue;
    *queue = tmp_queue;
}

t_queue *ft_pop_queue(t_queue **queue)
{
    t_queue *node = *queue;
    
    if(NULL != *queue)
        *queue = node->next;
    return node;
}

int ft_max(int a, int b)
{
    int max = 0;
    if (a > b)
        return a;
    return b;
}



int btree_level_count(t_btree *root)
{
    int level = 0;
    t_queue *queue = NULL;
    t_queue *elem = NULL;

    ft_push_queue(&queue, root, level);
    elem = ft_pop_queue(&queue);
    while (NULL != elem)
    {
        level = ft_max(level, elem->level);
        if (NULL != elem->node->left)
            ft_push_queue(&queue, elem->node->left, elem->level + 1);
        if (NULL != elem->node->right)
            ft_push_queue(&queue, elem->node->right, elem->level + 1);
        elem = ft_pop_queue(&queue);
    }
    return level;
}