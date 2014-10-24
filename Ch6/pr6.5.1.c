#include <stdio.h>
#include <string.h>
int main(void)
{
	char *p[] = {
		"はい",
		"いいえ",
		"わかりません。別の言い方で質問してください。"
	};
	int index, length;
	char str[80];

	printf("質問を入力してください。:\n");
	gets(str);
	length = strlen(str);
	index = length % 3;

	printf(p[index]);

}