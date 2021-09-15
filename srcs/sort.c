#include    "push_swap.h"

void sort(t_stack **stack_a, t_stack **stack_b)
{
    int     i;

    *stack_b = NULL;
    i = ft_dlst_size(*stack_a);
    if (ft_dlstis_sorted_ascend(*stack_a) == 0)
    {
        if (i <= 3)
            sort_three(stack_a);
        else if (i <= 5)
            sort_five(stack_a, stack_b);
    }
}

void    sort_three(t_stack **stack)
{
    int max;
    int min;
    int sorted;

    max = ft_dlst_max(*stack);
    min = ft_dlst_min(*stack);
    *stack = ft_dlst_first(*stack);
    sorted = 0;
    while (sorted != 1)
    {
        if ((*stack)->data == max)
            ra(stack);
        if ((*stack)->data > (*stack)->next->data)
            sa(*stack);
        if ((*stack)->data != min)
            rra(stack);
        if (ft_dlstis_sorted_ascend(*stack) == 1)
            break ;
        else if ((*stack)->data == min)
            rra(stack);
        sorted = ft_dlstis_sorted_ascend(*stack);
    }
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
    int min;
    int sorted;
    int i;

    sorted = 0;
    i = 0;
    while (i < 2)
    {
    min = ft_dlst_min(stack_a);
    *stack_a = ft_dlst_first(stack_a);
    if ((*stack_a)->data == min)
    {
        pb(stack_a, stack_b);
        i++; 
    }
    else
        if (pos_under_or_above(*stack_a, min) == 1)
            ra(stack_a);
    else
        rra(stack_a);
    }
    sort_three(stack_a);
    while (*stack_b)
        pa(stack_b, stack_a);
}