#include <stdio.h>
int main(void)
{
	int num;

	for(num = 1; num <= 100; num = num + 1)
		printf("%d, ", num);

	return 0;
}