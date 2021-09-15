#include "push_swap.h"

/*
**	check if we have a stack
**	then we use ft_dlst_first to make sure 
**	we're in the 1st element of the list
**	then we make sure that both elements 
**	are NULL so we don't have any connection
**	to the rest of the list and end up with a segmention fault
**	then we create a new node in the end of the list
**  with that data and we malloc it
**	after it we "clean" the 1st element of the stack
**	and then return to the beggining of the stack
*/

static void ft_rotate(t_stack **stack)
{
	if (!stack)
		return ;
	*stack = ft_dlst_first(*stack);
	(*stack)->next->prev = NULL;
	ft_dlstadd_back(stack, ft_dlst_new((*stack)->data));
	ft_dlst_remove(stack);
	*stack = ft_dlst_first(*stack);
}

void	ra(t_stack **stack_a)
{
	ft_putstr_fd("ra", 1);
	ft_putstr_fd("\n", 1);
	ft_rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	ft_putstr_fd("rb", 1);
	ft_putstr_fd("\n", 1);
	ft_rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd("rr", 1);
	ft_putstr_fd("\n", 1);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}
