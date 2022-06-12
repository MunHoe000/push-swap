#include"pushswap.h"

t_stack	*create_new_node()
{
	t_stack	*new;

	new = (t_stack*)malloc(sizeof(t_stack));
	new->num = 0;
	new->next = NULL;
	return(new);
}


t_stack		*copy_argv_to_stack(int argc, char **argv)
{
		int		i;
		t_stack	*stack_a;
		t_stack	*head;

		i = 1;
		stack_a = create_new_node();
		head = stack_a;
		while(argc > 2)
		{
			stack_a->num = ft_atoi(argv[i++]);
			stack_a->next = create_new_node();
			stack_a = stack_a->next;
			argc--;
		
		}
		stack_a->num = ft_atoi(argv[i]);
		stack_a->next = NULL;
		stack_a = head;
		return(stack_a);
}