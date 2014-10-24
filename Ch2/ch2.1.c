#include <stdio.h>
int main(void)
{
	int i, j, k;

	i = 47;
	printf("数当てゲームをします。数を入力してください。:\n");
	scanf("%d", &j);

	for(k=1; k <= 10; k++){
	if(i < j)
		printf("入力した数はマジックナンバーよりも大きいです。\n");
	else if(i > j)
		printf("入力した数はマジックナンバーよりも小さいです。\n");
	else if(i = j){
		printf("当たり！\n");
		return 0;
		}
	printf("別の数を入力してください。:\n");
	scanf("%d", &j);
	}

	return 0;
}