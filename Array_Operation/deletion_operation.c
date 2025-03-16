#include <stdio.h>

#define MAX_CAPACITY 100

int main(void)
{
	int i;
	int array[MAX_CAPACITY];
	int total = 0;
	int delete_index = 0;

	printf("Enter Total Number Of Values To store: ");
	scanf("%d", &total);

	for (i = 0; i < total; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	printf("\n");

	printf("array = ");
	for (i = 0; i < total; i++)
		printf("%d ", array[i]);
	printf("\n\n");

	printf("Enter Value Index to Delete: ");
	scanf("%d", &delete_index);
	printf("\n");

	for (i = delete_index; i < total; i++)
	{
		array[i] = array[i + 1];
	}
	total--;

	printf("array = ");
        for (i = 0; i < total; i++)
                printf("%d ", array[i]);
        printf("\n\n");

	return 0;
}
