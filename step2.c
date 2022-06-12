#include"pushswap.h"

t_stack		*bottom_top(t_stack *stack)
{
	t_stack	*head;
	t_stack	*temp;
	t_stack	*temp2;

	head = stack;
	while(stack->next->next)
		stack = stack->next;
	temp = stack;
	temp2 = stack->next;
	stack = ft_lstaddfront(head, temp2);
	temp->next = NULL;
	return (stack);
}

t_stack		*rra(t_stack **stack_a)
{
	*stack_a = bottom_top(*stack_a);
	write(1, "rra\n", 4);
	return(*stack_a);
}

t_stack		*rrb(t_stack **stack_b)
{
	*stack_b = bottom_top(*stack_b);
	write(1, "rrb\n", 4);
	return(*stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = bottom_top(*stack_a);
	*stack_b = bottom_top(*stack_b);
	printf("stack a is %d\n", (*stack_a)->num);
	write(1, "rrr\n", 4);
}

// void	pa(t_stack *stack_a, t_stack *stack_b)
// {
// 	t_stack		*head_a;

// 	head_a = stack_a;
// 	while(stack_a->next->next)
// 	{
// 		stack_a->next->num = stack_a->num;
// 		stack_a = stack_a->next;
// 	}
// 	head_a->num = stack_b->num;
// 	while(stack_b->next->next)
// 	{
// 		stack_b->num = stack_b->next->num;
// 		stack_b = stack_b->next;
// 	}
// 	stack_b->next = NULL;
// 	write(1, "pa\n", 3);
// }

// void	pb(t_stack *stack_a, t_stack *stack_b)
// {
// 	t_stack		*head_b;

// 	head_b = stack_b;
// 	while(stack_b->next->next)
// 	{
// 		stack_b->next->num = stack_b->num;
// 		stack_b = stack_b->next;
// 	}
// 	head_b->num = stack_a->num;
// 	while(stack_a->next->next)
// 	{
// 		stack_a->num = stack_a->next->num;
// 		stack_a = stack_a->next;
// 	}
// 	stack_a->next = NULL;
// 	add_result("pb\n\0");
// }