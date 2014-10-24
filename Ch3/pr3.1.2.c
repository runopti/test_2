#include <stdio.h>
int main(void)
{
	char ch, chh;
	for(ch = 'A'; ch <= 'Z'; ch++)
		printf("%d ", ch);

	for(chh = 'a'; chh <= 'z'; chh++)
		printf("\n %d", chh);

	return 0;
}