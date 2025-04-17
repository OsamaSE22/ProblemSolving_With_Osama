#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char* name;
	int age;
	struct node* link;	
}list_t;

int main(void)
{
	list_t *head;
	list_t p2 = {"Ahmed", 33, NULL};
	list_t p1 = {"Osama", 23, &p2};
	head = &p1;
	printf("name:%s\nage:%d\n", head->name, head->age);	
	printf("name:%s\nage:%d\n", head->link->name, head->link->age);
}
