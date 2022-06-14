#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include"string.h"
#include"stdio.h"
//#include"libft.h"
#include"stdlib.h"
#include"unistd.h"


typedef struct		stack
{
	int				num;
	struct stack	*next;
}					t_stack;

typedef struct		step
{
	char			*string;
	struct step		*next;
}					step_stack;

void	printlist(t_stack *stack);

int	ft_atoi(char *str);

t_stack	*create_new_node();

int		check_duplicate(t_stack **stack_a);

t_stack		*copy_argv_to_stack(int argc, char **argv);

t_stack		*rotate(t_stack *stack);

t_stack		*sa(t_stack	**stack_a);

t_stack		*sb(t_stack	**stack_b);

void	ss(t_stack	**stack_a, t_stack **stack_b);

t_stack		*top_bottom(t_stack *stack);

t_stack		*ra(t_stack *stack_a);

t_stack		*rb(t_stack *stack_b);

void	rr(t_stack *stack_a, t_stack *stack_b);

t_stack		*bottom_top(t_stack *stack);

void	rra(t_stack **stack_a);

t_stack		*rrb(t_stack **stack_b);

void	rrr(t_stack **stack_a, t_stack **stack_b);

t_stack		*ft_lstaddfront(t_stack *stack, t_stack *front);

void	pa(t_stack **stack_a, t_stack **stack_b);

void	pb(t_stack **stack_b, t_stack **stack_a);

void	short_sort(t_stack **stack_a, t_stack **stack_b);

#endif
