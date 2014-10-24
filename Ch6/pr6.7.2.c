#include <stdio.h>

void func(int *p);

int main(void)
{
	func(*p);
	printf("%d\n", *p);

	return 0;
}

void func(int *p)
{
	*p = -1;
}