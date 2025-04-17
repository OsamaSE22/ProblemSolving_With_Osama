#include <stdio.h>
#include <stdlib.h>

struct person{
	
	char* name;
	int age;
	int* ptr;

};

int main(void)
{
	struct person p1 = {"Osama", 23, NULL};
	printf("name:%s\nage:%d\nptr:%p\n", p1.name, p1.age, p1.ptr);
	return (0);

}
