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