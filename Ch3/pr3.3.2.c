#include <stdio.h>
int main(void)
{
	int i;

	printf("適当な数を入力してください。:\n");
	scanf("%d", &i);

	for(; i >= 0; i--)
		;
	printf("\a\n");

	return 0;
}