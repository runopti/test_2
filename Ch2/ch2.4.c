#include <stdio.h>
int main(void)
{
	int answer, count, ctotal, wtotal;
	ctotal = 0;
	wtotal = 0;

	for (count = 1; count < 11; count++){
		printf("%d + %d　は？\n", count, count);
		scanf("%d", &answer);

		if (answer == (count + count))
			printf("正解!\n");
			ctotal = ctotal + 1;
		else {
			printf("残念、間違いです。\n");
			printf("正解は %d。\n", (count + count));
			wtotal = wtotal + 1;
		}
	}

	printf("正解した数は%d, 不正解だった数は%dです。\n", ctotal, wtotal);

	return 0;
}