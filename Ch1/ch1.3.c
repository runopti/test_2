#include <stdio.h>

float o_to_c(void);

int main(void)
{
	float answer;

	answer = o_to_c();
	printf("それは　%f カップです。\n", answer);
	return 0;
}

float o_to_c(void)
{
	float on;
	printf("何オンスか入力してください。:");
	scanf("%f", &on);
	return on/8;
}