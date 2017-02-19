#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k;
    int a[4][3] = { 0 };
    int b[3][4] = { 0 };
    int c[4][4] = { 0 };

    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("请输入a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("请输入b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d ", c[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}