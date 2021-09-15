#include "stack_lst.h"

int	ft_dlst_max(t_stack *stack)
{
	int	max;

	stack = ft_dlst_first(stack);
	max = stack->data;
	while (stack)
	{
		if (max < stack->data)
			max = stack->data;
		stack = stack->next;
	}
	return (max);
}
