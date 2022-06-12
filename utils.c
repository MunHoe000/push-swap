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