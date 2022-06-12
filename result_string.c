#include"pushswap.h"

step_stack	*add_result(char *s)
{
	step_stack	*new;

	new = (step_stack*)malloc(sizeof(step_stack));
	new->string = s;
	new->next = NULL;
	return(new);
}