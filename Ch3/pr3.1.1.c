#include <stdio.h>
int main(void)
{
	int i;
	char ch, smallest;
	smallest = "z";
	
	for (i = 1; i <= 10; i++){
	printf("%dつ目の英字を入力してください。\n", i);
	ch = getchar();
	if("ch" < "smallest")
		smallest = ch;
	}
	printf("一番小さな文字は %c です。\n", smallest);
	return 0;
}