#include "main.h"
#include <stdio.h>

int main(void)
{
	int max;

	int array[] = {2,6,5,4,9,2,10,22,5,6,7,8};
	max = max_num(array, 12);
	printf("max number = %d\n", max);

	return(0);
}
