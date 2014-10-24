#include <stdio.h>
int main(void)
{
	char dic[10][80] = {
		{"zero"},
		{"one"},
		{"two"},
		{"three"},
		{"four"},
		{"five"},
		{"six"},
		{"seven"},
		{"eight"},
		{"nine"},
	};
	int num;

	printf("数字(0-9)を入力してください。:\n");
	scanf("%d", num);

	if (num >= 0 && num < 10)
			printf("その単語は%sです。\n", dic[num]);
	
	return 0;
}