#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX] = { 0 };
	int count = 1;

	printf("�ļ����� ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("\a �ļ���ʧ�ܡ�\n");
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

	printf("���ļ�����%d�С�\n", count);
	system("pause");
	return 0;

}