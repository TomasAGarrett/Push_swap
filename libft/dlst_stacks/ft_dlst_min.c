#include "stack_lst.h"

int	ft_dlst_min(t_stack *stack)
{
	int	min;

	stack = ft_dlst_first(stack);
	min = stack->data;
	while (stack)
	{
		if (min > stack->data)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}
