#include <stdio.h>
#include <stdbool.h>

bool includes(int array[], int length, int value);

int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int length = 10;

	if (includes(a, length, 3))
		printf("Found 3 in array a\n");
	else
		printf("Could not find 3 in array a\n");

	return (0);
}

bool includes(int array[], int length, int value)
{
	for (int i = 0; i < length; i++)\
	{
		if (array[i] == value) return true;
	}
	return false;
}
