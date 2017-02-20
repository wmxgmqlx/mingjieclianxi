#include<stdio.h>
#include<stdlib.h>

int sumup(int n)
{
    int i;
    int sum = 0;
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum;

}

int main()
{
    int a;
    int b;
    printf("请输入一个整数: ");
    scanf("%d", &a);
    b = sumup(a);
    printf("b=%d\n", b);
    system("pause");
    return 0;
}