#include"pushswap.h"

void	sa(struct stack a)
{
    int		temp;

	if (a.length < 2)
		return ;
    temp = a.stack[0];
    a.stack[0] = a.stack[1];
    a.stack[1] = temp;
	return ;
}

void	sb(struct stack b)
{
    int		temp;

	if (b.length < 2)
		return ;
    temp = b.stack[0];
    b.stack[0] = b.stack[1];
    b.stack[1] = temp;
	return ;
}

void	ss(struct stack a, struct stack b)
{
    sa(a);
	sb(b);
	return ;
}

void	pa(a, b)
{
	int		*temp;
	int		i;

	if (a.length < 2 | b.length < 2)
		return ;
	temp = malloc(sizeof (int) * a.length);
	i = a.length;
	temp[1] = refill(temp, a.stack, i, i - 1, 0);
	temp[0] = b.stack[0];
	a.stack = refill(a.stack, temp, i, i, -1);
	free (temp);
	i = b.length - 1;
	b.stack = refill(b.stack, b.stack, i, i + 1, -1);
	b.length--;
	return ;
}