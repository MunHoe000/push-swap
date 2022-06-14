#include"pushswap.h"

void	short_sort(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->num > (*stack_a)->next->num && (*stack_a)->num < (*stack_a)->next->next->num)
		sa(&(*stack_a));
	else if ((*stack_a)->num > (*stack_a)->next->num && (*stack_a)->next->num > (*stack_a)->next->next->num)
	{
		sa(&(*stack_a));
		rra(&(*stack_a));
	}
	else if ((*stack_a)->num > (*stack_a)->next->num && (*stack_a)->next->num < (*stack_a)->next->next->num)
		ra((*stack_a));
	else if ((*stack_a)->num < (*stack_a)->next->num && (*stack_a)->next->num > (*stack_a)->next->next->num)
	{
		(*stack_a) = sa(&(*stack_a));
		ra((*stack_a));
	}
	else if ((*stack_a)->num < (*stack_a)->next->num && (*stack_a)->num > (*stack_a)->next->next->num)
		rra(&(*stack_a));
}