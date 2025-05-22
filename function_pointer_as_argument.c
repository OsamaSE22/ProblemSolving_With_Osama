#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int subtract(int a, int b)
{
	return (a - b);
}

void calc(int a, int b, int (*ob)(int, int))
{
	printf("%d\n", ob(a, b));
}

int main(void)
{
	calc(10, 5, add);
	calc(10, 5, subtract);
	return (0);
}
