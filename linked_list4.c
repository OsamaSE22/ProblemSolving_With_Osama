#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int number;
	struct node *link;
};

int main(void)
{
	struct node *head;
	struct node *current;
	struct node *ptr;
	int count;
	count = 0;
	head = malloc(sizeof(struct node));
	current = malloc(sizeof(struct node));
	head->number = 5;
	head->link=current;
	current->number = 15;
	head->link->link= malloc(sizeof(struct node));
	head->link->link->number = 23;
	head->link->link->link= NULL;

	ptr =head;
	while(ptr != NULL)
	{
		count++;
		printf("ptr number: %d\n", ptr->number);
		ptr = ptr->link;

	}
	printf("number of nodes: %d\n", count);
}
