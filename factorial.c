#include "main.h"

int factorial(int n)
{
	int res;
	int i;

	res = 1;
	i = 1;
	while(i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}
