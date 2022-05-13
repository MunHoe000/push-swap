#include"pushswap.h"

void	printstruct(struct stack list1, struct stack list2, int count)
{
	count = list2.length;
	while(count > 0)
	{
		printf("%d      %d\n", *list1.stack, *list2.stack);
		list2.stack++;
		list1.stack++;
		count--;
	}
}


void	printlist(int *list, int count)
{
	while(count > 0)
	{
		printf("%d\n", *list);
		list++;
		count--;
	}
}

int		main()
{
	struct stack	list1;
	struct stack	list2;

	int trial1[2] = {1,2};
	int trial2[2] = {9,8};
	list1.stack = trial1;
	list1.length = 2;
	list2.stack = trial2;
	list2.length = 2;
	pa(list1, list2);
	return (0);
}