#include "../../include/libft.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int ft_point(void)
{
    t_point point;
    set_point(&point);
    if ((42 == point.x) && (21 == point.y))
        return (0);
    else
        return (1);
}