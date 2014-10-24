#include <stdio.h>
int main(void)
{
	int num;
	for(num = 1; num <= 10; num++)
		printf("%d, %d, %d\n", num, num*num, num*num*num);
	return  0;
}