#include <stdio.h>
int main(argc, *argv[])
{
	FILE *values, *count;

	/*使用法のチェック*/
	if (argc != 3){
		printf("使用法: プログラム名 ファイル1 ファイル2\n");
		exit(1);
	}

	/*ファイル開く*/
	if ((values = fopen(argv[1], wb)) == NULL){
		printf("ファイルが開けませんでした。\n");
		exit(1);
	}

	if ((count = fopen(argv[2], "wb")) == NULL){
		printf("ファイルが開けませんでした。\n");
		exit(1);
	}

	check = 0;

	while (check <= 32767){
		printf("double値を入力してください。\n");
		scanf("%d", &i)
		if ((fwrite(&i, sizeof(float), 1, values)) != 1){
			printf("書き込みエラーが起きました。\n");
			exit(1);
		}
		check++:
		if ((fwrite(?, sizeof(int), 1, count)) != 1){
			printf("書き込みエラーが起きました。\n");
			exit(1);
		}
	}

}