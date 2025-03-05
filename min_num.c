#include "main.h"

int min_num(int array[], int length)
{
	int i;
	int min;

	i =0;
	min = array[i];
	for(i = 1; i < 	length; i++)
	{
		if(array[i] < min)
		{
			min = array[i];
		}
	}
	return (min);
}
