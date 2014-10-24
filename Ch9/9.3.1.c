#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	unsigned count;

	/*引数のチェック*/
	if (argc != 2){
		printf("使用法: プログラム名 ファイル名\n");
		exit(1);
	}

	if ((fp = fopen(argv[1], "r")) == NULL ){
		printf("ファイルが開けませんでした。\n");
		exit(1);
	}

	count = 0;
	while(!feof(fp)){
		fgetc(fp);
		if (ferror(fp)){
			printf("ファイルエラー\n");
			break;
		}
		count++
	}
	
	printf("バイト数は %u です。\n", count);

	fclose(fp);
	return 0;
}