#include <stdio.h>
int main(void)
{
	printf("距離を指定してください。:\n");
	soundspeed();
	soundspeed(2568.45);
	
}

float soundspeed(float i)
{
	scanf("%f", &i);
	time = i / 1129;

	return time;
}

float soundspeed(float)
{
	
}