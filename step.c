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

// t_stack		*ra(t_stack *stack_a)
// {
// 	int 	temp;
// 	t_stack	*head;

// 	head = stack_a;
// 	temp = stack_a->num;
// 	while (stack_a->next)
// 	{
// 		stack_a->num = stack_a->next->num;
// 		stack_a = stack_a->next;
// 	}
// 	stack_a->num = temp;
// 	stack_a = head;
// 	//add_result("ra\n\0");
// 	return (stack_a);
// }

// t_stack		*rb(t_stack *stack_b)
// {
// 	int 	temp;
// 	t_stack	*head;

// 	head = stack_b;
// 	temp = stack_b->num;
// 	while (stack_b->next)
// 	{
// 		stack_b->num = stack_b->next->num;
// 		stack_b = stack_b->next;
// 	}
// 	stack_b->num = temp;
// 	stack_b = head;
// 	//add_result("rb\n\0");
// 	return (stack_b);
// }

// void	rr(t_stack *stack_a, t_stack *stack_b)
// {
// 	int 	temp_a;
// 	t_stack	*head_a;
// 	int 	temp_b;
// 	t_stack	*head_b;

// 	head_a = stack_a;
// 	temp_a = stack_a->num;
// 	head_b = stack_b;
// 	temp_b = stack_b->num;
// 	while (stack_a->next)
// 	{
// 		stack_a->num = stack_a->next->num;
// 		stack_a = stack_a->next;
// 	}
// 	stack_a->num = temp_a;
// 	stack_a = head_a;
// 	while (stack_b->next)
// 	{
// 		stack_b->num = stack_b->next->num;
// 		stack_b = stack_b->next;
// 	}
// 	stack_b->num = temp_b;
// 	stack_b = head_b;
// 	//add_result("rr\n\0");
// }