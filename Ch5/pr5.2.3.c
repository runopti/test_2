#include <stdio.h>
#include <string.h>

int main(void)
{
	char bigstr[1000] = "", str[80];

	do{
		printf("文字列を入力してください。\n");
		gets(str);
		
		strcat(str, "\n");
		strcat(bigstr, str);

		if (strlen(bigstr) + strlen(str) > 1000)
			break;
	}while (strcmp(str, "quit\n"));

	printf("%s\n", bigstr);

	return 0;
}