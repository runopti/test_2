#include <stdio.h>
int main(void)
{
	int i, j;

	for(i = 2; i <= 1000; i++){
		for(j = 2; j <= i/2;){
			if (i % j) /* if (i % j) != 0 */
				j++;
			else
				break;
		}

		if (!(i % j)) /* if (i % j) == 0 */
			continue;

		printf("%d,", i);
	}
	printf("\n");

	return 0;
}