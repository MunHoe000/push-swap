#include"pushswap.h"

int		check_duplicate(t_stack **stack_a)
{
	t_stack	*node;
	int		compare;
	t_stack	*head;

	head = create_new_node();
	head = *stack_a;
	node = create_new_node();
	while(((*stack_a)->next) != NULL)
	{
		node = (*stack_a)->next;
		compare = (*stack_a)->num;
		while((node) != NULL)
		{
			if(node->num == compare)
			{
				printf("Numbers cannot be duplicated\n");
				return (1);
			}
			node = node->next;
		}
		(*stack_a) = (*stack_a)->next;
	}
	free(node);
	(*stack_a) = head;
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
	//printf("bef is %p, num is %d\n", &stack_a, stack_a->num);
	if (check_duplicate(&stack_a))
		return (1);
	//printf("aft is %p, num is %d\n", &stack_a, stack_a->num);
	stack_b = create_new_node();
	// printf("before a\n");
	// printlist(stack_a);
	// printf("before b\n");
	// printlist(stack_b);

	stack_b->num = 3;
	// printlist(stack_a);
	// printf("bef address is %p\n", &stack_a);
	pa(&stack_a, &stack_b);
	// printf("=====after=======\n");
	// printlist(stack_a);
	// printf("aft address is %p\n", &stack_a);

	
	// if (argc == 4)
	// 	short_sort(&stack_a, &stack_b);
	// else if (argc == 6)
	// 	mid_sort(&stack_a, &stack_b);
	// else
	// {
	// 	write(1, "Please check argc\n", 18);
	// 	return (1);
	// }
	
	
	// printf("aft is %p, num is %d\n", &stack_a, stack_a->num);
	// printf("list is sorted: %d\n", is_sorted(&stack_a));
	// printf("after a\n");
	// printlist(stack_a);
	// printf("after b\n");
	// printlist(stack_b);
	//else
	//	long_sort(stack_a, stack_b);
	return (0);
}