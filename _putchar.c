#include <unistd.h>

char _putchar(int c)
{
	return (write(1, &c, 4));
}
