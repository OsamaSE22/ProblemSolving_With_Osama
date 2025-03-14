#include <stdio.h>
#define MAX_CAPACITY 100

int main()
{
	int array[MAX_CAPACITY];
	
	int total = 0;

	int insert_index = 0;
	int insert_value = 0;

	printf("Enter Total Number Of Values To Store: ");
	scanf("%d", &total);

	if (total > MAX_CAPACITY)
	{
		printf("Error: Total exceeds max array capacity. \n");
		return 1;
	}

	if (total < 0)
	{
		printf("Error: Total must be >= 0.\n");
		return 1;
	}

	for (int i = 0; i < total; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);

	}

	printf("\n");
	printf("array = ");

	for(int i = 0; i < total; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	printf("Enter Value To Inseret: ");
	scanf("%d", &insert_value);

	printf("Enter Index to Insert Value At: ");
	scanf("%d", &insert_index);

	if (insert_index < 0 || insert_index > total)
	{
		printf("Error: index out of range.\n");
		return 1;
	}

	if(total == MAX_CAPACITY)
	{
		printf("Error: Array at max capacity already.\n");
		return 1;
	}

	for(int i = total; i > insert_index; i--)
	{
		array[i] = array[i-1];
	}
	array[insert_index] = insert_value;
	total++;

	printf("\n");
        printf("array = ");

        for(int i = 0; i < total; i++)
        {
                printf("%d ", array[i]);
        }
        printf("\n\n");

	return 0;
}
