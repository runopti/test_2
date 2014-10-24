#include <stdio.h>

void f(char ch);
int main(void)
{
	f('a');
	printf("\n");
	return 0;
}

void f(char ch)
{
	while (ch != 'A'){
		printf("%c", ch);
		ch++;
		f(ch);
	};
}