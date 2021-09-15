#include "stack_lst.h"

// adds the element "new" at the end of the list
void	ft_dlstadd_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

	if (!*stack)
		*stack = new_node;
	else
	{
		last = ft_dlst_last(*stack);
		new_node->prev = last;
		last->next = new_node;
	}
}
