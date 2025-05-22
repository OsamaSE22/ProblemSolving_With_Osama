#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divd(int a, int b) {
    return a / b;
}
int main(void)
{
	int (*Array[])(int, int) = {add, sub, mul, divd};
	int x = 10, y = 5;

	printf("Sum: %d \n", Array[0](x, y));
	printf("Difference: %d\n", Array[1](x, y));
	printf("Product: %d\n", Array[2](x, y));
	printf("Division: %d\n", Array[3](x, y));

	return (0);
}
