#include <stdio.h>

int convert(void);
int dol;

int main(void)
{
	int pon;
	
	printf("米国ドルを英国ポンドに変換します。米国ドルの値を入力してください。:\n");
	scanf("%d", &dol);
	pon = convert();
	printf("換算後の金額は %d　です\n", pon);
}

int convert(void)
{
	return dol / 2;
}