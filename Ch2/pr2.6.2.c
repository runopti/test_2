#include <stdio.h>
int main(void)
{
	int num;

	printf("整数値を入力してください。:\n");
	scanf("%d ", &num);
    
	for(num > 0; num >= 0; num--)
		printf("%d\n", num);

	printf("\a\n");
}