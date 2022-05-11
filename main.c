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
	int				count;
	//int				trial[5];

	int trial1[5] = {1,2,3,4,5};
	int trial2[5] = {5,4,3,2,1};
	list1.stack = trial1;
	list1.length = 5;
	list2.stack = trial2;
	list2.length = 5;
	pa(list1, list2);
	//printstruct(list1, list2, 5);
	return(0);
}