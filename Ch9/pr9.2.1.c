#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;

	if (argc != 2){
		printf("使用法: プログラム名 ファイル名\n");
		exit(1);
	}

	/*引数で指定したテキストファイルの内容を表示する*/
	if ((fp = fopen(argv[1], "r")) == NULL){
		printf("ファイルが読み込めません\n");
		exit(1);
	}

	while ((ch = fgetc(fp)) != EOF){
		putchar(ch);
	}
	fclose(fp);

	return 0;
}