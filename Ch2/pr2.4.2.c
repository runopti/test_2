#include <stdio.h>
int main(void)
{
	int num;
	for(num = 17; num <= 100; num = num + 1){
		if(num % 17 == 0)
			printf("%d,", num);
	}

	return 0;
}