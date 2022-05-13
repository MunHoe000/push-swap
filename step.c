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

void	pa(struct stack a, struct stack b)
{
	int		*temp;

	if (a.length < 2 | b.length < 2)
		return ;
	temp = malloc(sizeof(int) * (a.length + 1));
	temp[0] = b.stack[0];
	temp = lstcopy(temp, a.stack, 1, 0, a.length);
	a.stack = lstcopy(a.stack, temp, 0, 0, a.length);
	a.length = a.length + 1;
	printf("\na\n");
	printlist(a.stack, a.length);
	printf("length is: %d\n", a.length);
	free (temp);
	b.stack = b.stack + 1;
	b.length = b.length - 1;
	printf("\nb\n");
	printlist(b.stack, b.length);
	printf("length is: %d\n", b.length);
	return ;
}