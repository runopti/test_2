#include <stdio.h>
int main(void)
{
	int i;
	char ch;

	for(i = 1; i <= 100; i++){
		printf("%dドルの妥当なチップ額は%f, %f, %fです。", i, i*0.1, i*0.15, i*0.2);
		printf("続けますか？(Y or N)\n");
		ch = getchar();
		if (ch == 'N')
			break;
		else (ch == 'Y')
			;
	}
	return 0;
}