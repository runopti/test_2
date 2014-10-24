#include <stdio.h>
{
	int i;
	again:
	if (i <= 10){
		printf("%d,", i);
		i++;
		goto again;
	}
}