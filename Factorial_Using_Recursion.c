#include "main.h"

int Factorial_Using_Recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * Factorial_Using_Recursion(n-1));
}
