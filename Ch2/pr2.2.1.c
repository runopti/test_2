#include <stdio.h>
int main(void)
{
	int num1, num2, choice;

	printf("第一の数を入力してください。:\n");
	scanf("%d", &num1);

	printf("第二の数を入力してください。:\n");
	scanf("%d", &num2);

	printf("1.和　2.積　のどちらかを選んでください。（数字で入力してください。）");
	scanf("%d", &choice);

	if (choice == 1)
		printf("和は %d です。", num1 + num2);
	else 
		printf("積は %d です。", num1 * num2);

	return 0;
}