#include"pushswap.h"

t_stack		*rra(t_stack *stack_a)
{
	int 	temp;
	int		temp2;
	int		temp3;
	t_stack	*head;

	head = stack_a;
	while (stack_a->next->next)
	{
		temp2 = stack_a->num;
		temp3 = stack_a->next->num;
		stack_a->next->num = temp3;
		stack_a = stack_a->next;
	}
	temp = stack_a->next->num;
	stack_a->next->num = stack_a->num;
	head->num = temp;
	stack_a = head;
	//add_result("rra\n\0");
	return (stack_a);
}

// t_stack		*rrb(t_stack *stack_b)
// {
// 	int 	temp;
// 	t_stack	*head;

// 	head = stack_b;
// 	while (stack_b->next->next)
// 	{
// 		stack_b->next->num = stack_b->num;
// 		stack_b = stack_b->next;
// 	}
// 	temp = stack_b->next->num;
// 	stack_b->next->num = stack_b->num;
// 	head->num = temp;
// 	stack_b = head;
// 	add_result("rrb\n\0");
// 	return (stack_b);
// }


// t_stack		*rrr(t_stack *stack_a, t_stack *stack_b)
// {
// 	int 	temp_a;
// 	t_stack	*head_a;
// 	int 	temp_b;
// 	t_stack	*head_b;

// 	head_a = stack_a;
// 	while (stack_a->next->next)
// 	{
// 		stack_a->next->num = stack_a->num;
// 		stack_a = stack_a->next;
// 	}
// 	temp_a = stack_a->next->num;
// 	stack_a->next->num = stack_a->num;
// 	head_a->num = temp_a;
// 	stack_a = head_a;
// 	head_b = stack_b;
// 	while (stack_b->next->next)
// 	{
// 		stack_b->next->num = stack_b->num;
// 		stack_b = stack_b->next;
// 	}
// 	temp_b = stack_b->next->num;
// 	stack_b->next->num = stack_b->num;
// 	head_b->num = temp_b;
// 	stack_b = head_b;
// 	add_result("rrr\n\0");
// }

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
// 	add_result("pa\n\0");
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