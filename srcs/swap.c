#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	temp;

	stack = ft_dlst_first(stack);
	if (stack->next == NULL || !stack)
		return ;
	{
		temp = stack->next->data;
		stack->next->data = stack->data;
		stack->data = temp;
	}
	stack = ft_dlst_first(stack);
}

void	sa(t_stack *stack_a)
{
	ft_putstr_fd("sa\n", 1);
	swap(stack_a);
}

void	sb(t_stack *stack_b)
{
	ft_putstr_fd("sb\n", 1);
	swap(stack_b);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_putstr_fd("ss\n", 1);
	swap(stack_a);
	swap(stack_b);
}
