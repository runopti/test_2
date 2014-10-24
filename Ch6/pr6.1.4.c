#include <stdio.h>
int main(void)
{
	int *p, i;

	for (i = 0; i < 10; i++){
		p = &i;
		printf("%d\n", *p);
	}
	return 0;
}
