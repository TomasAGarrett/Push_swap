#include "push_swap.h"

static int pos_num_min(t_stack *stack, int min)
{
    int pos;

    pos = 1;
    while(stack->next)
    {
        if (stack->data == min)
            break ;
        else
        {
            stack = stack->next;
            pos++;
        }
    }
    return (pos);
}

int pos_under_or_above(t_stack *stack, int min)
{
    int pos;
    int size;

    size = ft_dlst_size(stack);
    pos = pos_num_min(stack, min);
    if (pos > size / 2)
        return (0);
    else
        return (1);
}
