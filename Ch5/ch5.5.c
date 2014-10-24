#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80];

	do{
		printf("文字列を入力してください :\n");
		gets(str);

		if (!strcmp(str, "quit"))
			break;

		printf("%s\n", str);
	} while(strcmp(str, "quit"));

	return 0;
}