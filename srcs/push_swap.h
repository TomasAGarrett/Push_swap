#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <stdio.h>

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

void	checkychecky(int argc, char **argv, int i);
void	build_stack(int input, t_stack **stack);
void    sort_three(t_stack **stack);
void    sort(t_stack **stack_a, t_stack **stack_b);
void	sort_3(t_stack **stack_a);
int	    middle_numb(t_stack **stack_a);
void	stackA_to_stackB(t_stack **stack_a, t_stack **stack_b);
int	    verify_to_send(t_stack **stack_a);
void	verify_pos(t_stack **stack_a, t_stack **stack_b);

# endif