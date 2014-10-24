#include <stdio.h>
int main(void)
{
	int num[20], count[20];
	int item[20];
	int count, i, j;

	printf("数字を20個入力してください:\n");
	for(i = 0; i < 20; i++){
	scanf("%d", num[i]);
	}

	/*モードを調べる*/
	for(i = 0; i < 20; i++){
		for (j = i++; j < 20; j++){
			if (num[i] == num[j]){
				count = count + 1;
			}
		count[i] = count;
		item[i] = num[i];
		}
	}

	
	printf("モードは\n");
}