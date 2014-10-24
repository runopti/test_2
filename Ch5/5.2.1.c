#include <stdio.h>
int main(void)
{
	char str[80];
	int i;

	printf("文字列を入力してください.: \n");
	gets(str);

	for (i = 79; i >= 0; i--){
		printf("%c\n", str[i]);
	}
}