#include <stdio.h>
int main(void)
{
	int len, wid, hei;

	printf("立体の体積を計算します。長さを入力してださい。:");
	scanf("%d", &len);
	printf("幅を入力してください。:");
	scanf("%d", &wid);
	printf("高さを入力してください。:");
	scanf("%d", &hei);

	printf("体積は %d です。", len * wid * hei);

	return 0;
}