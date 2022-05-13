#include"pushswap.h"

int		*lstcopy(int *c, int *d, int start, int cstart, int limit)
{
	while (start < limit + 1)
	{
		c[start] = d[cstart];
		start++;
		cstart++;
	}
;	return (c);
}