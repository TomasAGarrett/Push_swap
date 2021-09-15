#include "push_swap.h"

static int  checkdigit(char *str)
{
	int i;
	int a;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && ft_strlen(str) >= 2)
		i++;
	while(str[i])
	{
		a = ft_isdigit(str[i]);
		if (a == 0)
			return (a);
		i++;
	}
	return (a);
}

static int checkint(char *str)
{
	long long i;

	i = ft_atoll(str);
	if (i > 2147483647 || i < -2147483648)
		return (0);
	return (1);
}

static int  isdup(char **argv, int argc, int i, t_stack **checker)
{
	int		holder;
	t_stack	*head;

	while (++i < argc)
		build_stack(ft_atoi(argv[i]), checker);
	head = *checker;
	while (head->next)
	{
		holder = (*checker)->data;
		while ((*checker)->next)
		{
			if (holder == (*checker)->next->data)
			{
				ft_dlst_clear(checker);
				return (1);
			}
			else
				*checker = (*checker)->next;
		}
		head = head->next;
		*checker = head;
	}
	ft_dlst_clear(checker);
	return (0);
}

void	checkychecky(int argc, char **argv, int i)
{
	t_stack *checker;

	checker = NULL;
	if (argc == 1)
		exit(0);
	while (i <= argc -1)
	{
		if (checkdigit(argv[i]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
		if (checkint(argv[i]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
		i++;

	}
	if (isdup (argv, argc, 0, &checker) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
}
