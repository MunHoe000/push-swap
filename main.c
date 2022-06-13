#include"pushswap.h"

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int		i;

	i = 1;
	if (argc <= 2)
		return (1);
	stack_a = copy_argv_to_stack(argc, argv);
	stack_b = copy_argv_to_stack(argc, argv);
	//stack_b = (t_stack*)malloc(sizeof(stack_a));
	printf("before a\n");
	printlist(stack_a);
	printf("before b\n");
	printlist(stack_b);
	pb(&stack_b, &stack_a);
	printf("after a\n");
	printlist(stack_a);
	printf("after b\n");
	printlist(stack_b);

	//if (argc <= 6)
	//	short_sort(stack_a, stack_b);
	//else
	//	long_sort(stack_a, stack_b);
	return (0);
}