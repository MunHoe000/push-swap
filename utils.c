#include"pushswap.h"

void	printlist(t_stack *stack)
{
	while(stack)
	{
		printf("%i\n", stack->num);
		stack = stack->next;
	}
	return ;
}

t_stack		*ft_lstaddfront(t_stack *stack, t_stack *front)
{
	if(!stack || !front)
		return (NULL);
	front->next = stack;
	stack = front;
	return(stack);
}

int		is_sorted(t_stack **stack_a)
{
	t_stack	*head;

	head = create_new_node();
	head = (*stack_a);
	while(((*stack_a)->next) != NULL)
	{
		if((*stack_a)->num > (*stack_a)->next->num)
			return (0);
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = head;
	free(head);
	return (1);
}