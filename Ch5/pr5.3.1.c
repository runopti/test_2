#include <stdio.h>
int main(void)
{
	int array[3][3][3];
	int i,j,k;
	int total;

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			for (k = 0; k < 3; k++)
				array[i][j][k] = i*9 + j*3 + k + 1;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			for (k = 0; k < 3; k++){
				printf("%d,", array[i][j][k]);
			}
		}
	}
	printf("\n");

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			for (k = 0; k < 3; k++){
				total = total + array[i][j][k];
			}
		}
	}
	printf("%d\n", total);
	return 0;
}