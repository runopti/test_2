#include <stdio.h>
int main(void)
{
	int i;

	do{
	printf("住所録メニュー\n
		1.住所を入力する。\n
		2.住所を削除する。\n
		3.リストを検索する。\n
		4.リストを印刷する。\n
		5.終了する。\n
		番号を選択してください(1-5):\n");
	scanf("%d", &i);
	} while (i != 1 && i != 2 && i != 3 && i != 4 && i != 5);

	printf("了解しました。\n");

	return 0;
}