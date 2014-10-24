#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char *ch;
	char le;
	int count = 0;
	if (argc != 2){
		printf("使用法: プログラム名 ファイル名\n");
		exit(1);
	}

	/*読み込みのためにファイルを開く*/
	if ((fp = fopen(argv[1], "r")) == NULL){
		printf("ファイルが読み込めませんでした。\n");
		exit(1);
	}
	/*ファイルを読み込み直す*/
	while ((ch = fgetc(fp)) != EOF){
		/*文字がそれぞれ何回現れたか数える*/
		for (le = 'a'; le != 'z' + 1; le++){
			while(*ch){
				if (*ch == le)
					count++;
			}
			printf("%cの数は%d回です。\n", le, count);
		}
	}

	fclose(fp);

	return 0;
}