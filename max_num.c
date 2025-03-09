#include "main.h"

int max_num(int array[], int length)
{
	int i;
	int max;

	i = 0;
	max = array[i];
	for(i = 1; i < length; i++)
	{
		if (array[i] > max) max = array[i];
	}
	return max;
}
