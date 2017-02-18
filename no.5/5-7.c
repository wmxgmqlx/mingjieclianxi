#include<stdio.h>
#include<stdlib.h>
#define NUMBER  10

int main()
{
    int i, j;
    int num;
    int data[NUMBER] = { 0 };
    
    printf("请输入数据个数：");
    do{
        scanf("%d", &num);
        if (num<1 || num>NUMBER)
            printf("\a 请输入1~%d的数:", NUMBER);
    } while (num<1 || num>NUMBER);
    
    for (i = 0; i < num; i++)
    {
        printf("%2d号: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("{");
    for (i = 0; i < num; i++)
    {
        if (i == 0)
            printf("%d", data[i]);
        else
            printf(", %d", data[i]);
    }
    printf("}");
    printf("\n");

    system("pause");
    return 0;
}