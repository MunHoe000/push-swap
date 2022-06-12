#include"pushswap.h"

t_stack		*rotate(t_stack *stack)
{
	int	temp;

	temp = stack->num;
	stack->num = stack->next->num;
	stack->next->num = temp;
	return (stack);
}

t_stack		*sa(t_stack	*stack_a)
{
	stack_a = rotate(stack_a);
	write(1, "sa\n", 3);
	return (stack_a);
}

t_stack		*sb(t_stack	*stack_b)
{
	stack_b = rotate(stack_b);
	write(1, "sb\n", 3);
	return (stack_b);
}

void	ss(t_stack	*stack_a, t_stack *stack_b)
{
	stack_a = rotate(stack_a);
	stack_b = rotate(stack_b);
	write(1, "ss\n", 3);
}

t_stack		*top_bottom(t_stack *stack)
{
	int 	temp;
	t_stack	*head;

	head = stack;
	temp = stack->num;
	while (stack->next)
	{
		stack->num = stack->next->num;
		stack = stack->next;
	}
	stack->num = temp;
	stack = head;
	return (stack);
}

t_stack		*ra(t_stack *stack_a)
{
	stack_a = top_bottom(stack_a);
	write(1, "ra\n", 3);
	return (stack_a);
}

t_stack		*rb(t_stack *stack_b)
{
	stack_b = top_bottom(stack_b);
	write(1, "rb\n", 3);
	return (stack_b);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	stack_a = top_bottom(stack_a);
	stack_b = top_bottom(stack_b);
	write(1, "rr\n", 3);
	return ;
}