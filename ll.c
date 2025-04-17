#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct name
{
	char* name;
	struct name* link;
}name;

int main(void)
{
	name* ptr1, *ptr2;
	ptr1 = malloc(sizeof(name));
	ptr2 = malloc(sizeof(name));
	ptr1->name = "osama";
	ptr1->link = ptr2;
	ptr2->name = "Yaser";
	ptr2->link = NULL;
	printf("ptr2 name: %s\n", ptr1->link->name);
	return 0;
}
