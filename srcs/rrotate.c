#include "push_swap.h"

static void rrotate(t_stack **stack)
{
    t_stack *temp;


    if (!stack)
        return ;
    temp = ft_dlst_last(*stack);
    temp->prev->next = NULL;
    ft_dlstadd_front(stack, ft_dlst_new(temp->data));
    ft_dlst_remove(&temp);
}

void    rra(t_stack **stack)
{
    ft_putstr_fd("rra\n", 1);
    rrotate(stack);
}

void    rrb(t_stack **stack)
{
    ft_putstr_fd("rrb\n", 1);
    rrotate(stack);
}

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_putstr_fd("rrr\n", 1);
    rrotate(stack_a);
    rrotate(stack_b);
}

