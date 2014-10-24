#include <stdio.h>
int main(void)
{
	int item[10];
	int i, j;

	/* 数値を読み込む*/
	for(i = 0; i < 10; i++){
		printf("数字を十個入力してください。:\n");
		scanf("%d", &item[i]);
	}

	printf("同じ数字は");

	/*　同数値を検出 */
	for(i = 0; i < 10; i++){
		for(j = i + 1; j < 9 ; j++){
			if(item[i] == item[j])
				printf("%d, ", item[j]);
		}
	}

	printf("です。\n");

	return 0;
}