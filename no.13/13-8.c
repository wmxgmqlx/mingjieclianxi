#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	FILE *sfp, *dfp;
	char sname[FILENAME_MAX] = { 0 };
	char dname[FILENAME_MAX] = { 0 };

	printf("打开原文件: ");    scanf("%s", sname);
	printf("打开目标文件: ");  scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
		printf("\a 原文件打开失败。\n");
	else
	{
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("\a 原文件打开失败。\n");
		else
		{
			while ((ch = fgetc(sfp)) != EOF)
			{
				putchar(ch);
				fputc(ch, dfp);
			}
			fclose(dfp);
		}
		fclose(sfp);
	}
	
	system("pause");
	return 0;
}