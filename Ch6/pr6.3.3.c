#include <stdio.h>
int main(void)
{
	char str[80];
	char *p;

	printf("文字列入力せよ:\n");
	gets(str);

	p = str;

	while (!(*p = ' '))
		p++;

	p++;
	
	while (*p){
		printf("%c", *p++);
	}
	return 0;
}