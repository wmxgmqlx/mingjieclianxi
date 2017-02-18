#include<stdio.h>
#include<stdlib.h>
#define NUMBER 7

int main()
{
    int i;
    int x[NUMBER];
    for (i = 0; i < NUMBER; i++)
    {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < (NUMBER / 2); i++)
    {
        int temp = x[i];
        x[i] = x[NUMBER - 1 - i];
        x[NUMBER - 1 - i] = temp;
    }
    puts("倒序排列");
    for (i = 0; i < NUMBER; i++)
    {
        printf("x[%d]=%d\n", i, x[i]);
    }

    system("pause");
    return 0;
}