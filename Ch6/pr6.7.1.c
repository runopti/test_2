#include <stdio.h>

void mystrcat(char *to, char *from);

int main(void)
{
	char str[80] = "hihi";

	mystrcat(str, "これはテストです。");
	printf(str);

	return 0;
}

void mystrcat(char *to, char *from)
{
	while (*from){
		*to = *to + *from;
		*from++
	}
}