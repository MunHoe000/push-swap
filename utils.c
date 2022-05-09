#include"pushswap.h"

int		*refill(int *c, int *d, int start, int end, int limit)
{
	while (start > limit)
	{
		c[start] = d[end];
		start--;
	}
	return (c);
}