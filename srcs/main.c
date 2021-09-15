#include "push_swap.h"

void	build_stack(int input, t_stack **stack)
{
	t_stack *temp;

	if (*stack == NULL)
		*stack = ft_dlst_new(input);
	else
	{
		temp = ft_dlst_new(input);
		ft_dlstadd_back(stack, temp);
	}
}

int main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack *stack_b;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	checkychecky(argc, argv , 1);
	while (i < argc)
	{
		build_stack(ft_atoi(argv[i]), &stack_a);
		i++;
	}
	sort(&stack_a, &stack_b);

	printf("stack A\n");
    while (stack_a)
    {
        printf("%d, \n", stack_a->data);
        stack_a = stack_a->next;
    }
    printf("stack B\n");
    while (stack_b)
    {
        printf("%d, \n", stack_b->data);
        stack_b = stack_b->next;
    }

	ft_dlst_clear(&stack_a);
	ft_dlst_clear(&stack_b);
	return (0);
}