#include <stdio.h>
int main(void)
{
	int i, j, k, total;
	total = 0;

	printf("部屋の数はいくつありますか\n");
	scanf("%d", &i);

	for(j = 1; j <= i; j++){
		printf("%dつ目の部屋の寸法を入力してください。:\n", j);
		scanf("%d", &k);
		total = total + k;
	}

	printf("床の総面積は%dです。\n", total);

	return 0;
}
