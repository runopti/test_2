#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE *fp1, *fp2. *fp3;

	if (argc != 3){
		printf("使用法: プログラム名 ファイル名1 ファイル名2\n");
		exit(1)
	}

	if ((fp1 = openf(argv[1], "rb")) == NULL){
		printf("ファイル1が開けません\n");
		exit(1);
	}

	if ((fp2 = openf(argv[2], "rb")) == NULL){
		printf("ファイル2が開けません\n");
		exit(1);
	}

	while(!feof(fp1)){
		*fp3 = *fp1
		*fp1 = *fp2
		*fp2 = *fp3
		fp1++;
		fp2++;
		fp3++;
	}

}