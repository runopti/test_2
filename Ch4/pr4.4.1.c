#include <stdio.h>
int main(void)
{
	int i = 100;

	for(; i >= 1; i--){
		printf("%d,", i);
	}
	printf("\n");

	return 0;
}