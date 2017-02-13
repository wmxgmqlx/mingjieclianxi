#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	double b[10] = { 1.67, 6.89, 6.44, 123.45, 12.09, 65.55, 11.87, 12.66, 89.12, 211.32 };
	double c[10] = { 0 };
	int i;

	if ((fp = fopen("shuzu.bin", "wb")) == NULL)
		printf("\a 文件打开失败。\n");
	else
	{
		fwrite(b, sizeof(double), 10, fp);
		fclose(fp);
	}

	//读取操作
	if ((fp = fopen("shuzu.bin", "rb")) == NULL)
		printf("\a 文件打开失败。\n");
	else
	{
		fread(c, sizeof(double), 10, fp);
		for (i = 0; i < 10; i++)
		{
			printf("%lf\n", c[i]);
		}
		fclose(fp);
	}

	system("pause");
	return 0;
}