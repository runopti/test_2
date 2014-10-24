#include <stdio.h>


int main(void)
{
	char ch;
	printf("一文字を入力してください。\n");
	ch = getchar();
	printf("このASCIIコードは %d　です。\n", ch);

	return 0;
}