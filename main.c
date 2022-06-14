#include"pushswap.h"

int		check_duplicate(t_stack **stack_a)
{
	t_stack	*node;
	t_stack	*start;

	start = create_new_node();
	node = create_new_node();
	printf("oookkk");
	while(((*stack_a)->next) != NULL)
	{
		start = (*stack_a)->next;
		node->num = (*stack_a)->num;
		while((start->next) != NULL)
		{
			if(node->num == start->num)
			{
				printf("Error\n");
				return (1);
			}
			start = start->next;
		}
		(*stack_a) = (*stack_a)->next;
	}
	free(start);
	free(node);
	return (0);
}

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int		i;

	i = 1;
	if (argc <= 2)
		return (1);
	stack_a = copy_argv_to_stack(argc, argv);
	printf("ok\n");
	if (check_duplicate(&stack_a))
		return (1);
	printf("ok\n");
	stack_b = create_new_node();
	// printf("before a\n");
	// printlist(stack_a);
	// printf("before b\n");
	// printlist(stack_b);
	
	if (argc <= 6)
		short_sort(&stack_a, &stack_b);
	
	// printf("after a\n");
	//printlist(stack_a);
	// printf("after b\n");
	// printlist(stack_b);
	//else
	//	long_sort(stack_a, stack_b);
	return (0);
}