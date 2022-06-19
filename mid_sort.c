#include"pushswap.h"

void	mid_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	times;

	times = 0;
	pb(&(*stack_b), &(*stack_a));
	pb(&(*stack_b), &(*stack_a));
	printf("bef is %p\n", &(*stack_a));
	short_sort(&(*stack_a), &(*stack_b));
	if(!is_sorted(&(*stack_a)))
		return ;
	printf("is sorted is: %d\n", is_sorted(&(*stack_a)));
	//something is wrong in pa and lst_addfront, the pointer should change, 
	pa(stack_a, stack_b);
	printf("aft is %p\n", &(*stack_a));
	while ((*stack_b)->next != NULL)
	{
		printf("1\n");
		printf("is sorted is: %d\n", is_sorted(&(*stack_a)));
		while (!is_sorted(&(*stack_a)))
		{
			printf("2\n");
			sa(&(*stack_a));
			ra(*stack_a);
			times++;
		}
		pa(&(*stack_a), &(*stack_b));
		(*stack_b) = (*stack_b)->next;
	}
	while (times > 0)
	{
		rra(&(*stack_a));
		times--;
	}
	return ;
}