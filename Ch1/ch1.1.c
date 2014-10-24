#include <stdio.h>
int main(void)
{
	float weight;

	printf("自分の体重を入力してください。:\n");
	scanf("%f", &weight);
	printf("月面での体重は %f です。\n", weight * 0.17);

	return 0;
}