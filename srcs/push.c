#include "push_swap.h"

static void push(t_stack **stack_deez, t_stack **stack_nuts)
{
	if (!stack_deez)
		return ;
	ft_dlstadd_front(stack_nuts, ft_dlst_new((*stack_deez)->data));
	ft_dlst_remove(stack_deez);
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
		ft_putstr_fd("pa\n", 1);
		push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
		ft_putstr_fd("pb\n", 1);
		push(stack_a, stack_b);
}
