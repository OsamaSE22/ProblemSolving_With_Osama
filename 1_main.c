#include "main.h"
#include <stdio.h>
int main(void)
{
	/*int min_num*/
	int a;
	int grades[] = {7,8,9,6,1,4,3};
	a = min_num(grades, 7);

	printf("minimum number is: %d\n", a);
}
