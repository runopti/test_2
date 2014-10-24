#include <stdio.h>
int main(void)
{
	int num;
	printf("数値を入力してください。:\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("それは偶数です。\n");
	if (num % 2 == 1)
		printf("それは奇数です\n");
	return 0;
}