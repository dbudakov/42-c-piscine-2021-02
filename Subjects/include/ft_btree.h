#ifndef _FT_BTREE_
#define _FT_BTREE_

typedef struct      s_btree
{
    struct s_btree  *left;
    struct s_btree  *right;
    void            *item;
}                   t_btree;

typedef struct      s_stack
{
    struct s_stack  *next;
    int             level;
}                   t_stack;

#endif
