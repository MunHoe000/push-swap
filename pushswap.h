#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include"string.h"
#include"stdio.h"
//#include"libft.h"
#include"stdlib.h"
#include"unistd.h"


typedef struct stack
{
	int		*stack;
	int		length;
} a, b;

void	sa(struct stack a);

int		*refill(int *c, int *d, int start, int end, int limit);

void	sb(struct stack b);

void	ss(struct stack a, struct stack b);

void	pa(struct stack a, struct stack b);

void	printstruct(struct stack list1, struct stack list2, int count);

void	printlist(int *list, int count);

#endif