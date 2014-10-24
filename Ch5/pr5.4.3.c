#include <stdio.h>
int main(void)
{
	int num[][3] = {
		{1,1,1},
		{2,4,8},
		{3,9,27},
		{4,16,64},
		{5,25,125},
		{6,36,216},
		{7,49,343},
		{8,64,512},
		{9,81,729},
		{10,100,1000}
	};
	int i, triple;


	printf("三乗値を入力してください。:\n");
	scanf("%d", &triple);

	for (i = 0; i < 10; i++){
		if (num[i][2] == triple)
			printf("三乗根は%dで, その根の二乗は%dです。\n", num[i][0], num[i][1]);
	}
	return 0;
}