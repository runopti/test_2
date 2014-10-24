#include <stdio.h>
int main(void)
{
	float f, ff;

	printf("一つ目の浮動小数点を入力してください\n");
	scanf("%f", &f);
	printf("二つ目の浮動小数点を入力してください\n");
	scanf("%f", &ff);
	printf("合計は %f　です\n", f+ff);

	return 0;
}