#include <stdio.h>
int main(void)
{
	int i;
	for(i = 1; i <= 1000;){
		printf("%d\n", i);
		i = 2*i;
	}
}