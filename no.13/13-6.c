#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX] = { 0 };
	int count = 1;

	printf("文件名： ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("\a 文件打开失败。\n");
	}
	else
	{
		while ((ch = fgetc(fp)) != EOF)
		{
			if (ch == '\n')
				count++;
		}
		fclose(fp);
	}

	printf("该文件共有%d行。\n", count);
	system("pause");
	return 0;

}