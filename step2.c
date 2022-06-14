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

void	rra(t_stack **stack_a)
{
	*stack_a = bottom_top(*stack_a);
	write(1, "rra\n", 4);
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
	write(1, "rrr\n", 4);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*head;
	
	head = create_new_node();
	head->num = (*stack_b)->num;
	*stack_a = ft_lstaddfront(*stack_a, head);
	*stack_b = (*stack_b)->next;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack		*head;
	
	head = create_new_node();
	head->num = (*stack_a)->num;
	*stack_b = ft_lstaddfront(*stack_b, head);
	*stack_a = (*stack_a)->next;
	write(1, "pb\n", 3);
}